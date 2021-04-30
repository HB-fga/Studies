import utils

import random
from typing import Callable
from abc import ABC, abstractmethod
import enum
import pyxel
from easymunk import Vec2d, Arbiter, CircleBody, Space, march_string
from easymunk import pyxel as phys

class Enemy(utils.GameObject, CircleBody):
    SPEED = 90
    RADIUS = 16
    COLOR = pyxel.COLOR_CYAN
    
    @staticmethod
    def random(xmin, xmax, ymin, ymax):
        vx = random.uniform(-Enemy.SPEED / 3, Enemy.SPEED / 3)
        vy = random.uniform(0, Enemy.SPEED / 3)
        return Enemy(
            x=random.uniform(xmin + Enemy.RADIUS, xmax - Enemy.RADIUS),
            y=random.uniform(ymin + Enemy.RADIUS, ymax - Enemy.RADIUS),
            velocity=(vx, vy),
            angular_velocity=random.uniform(-360, 360),
        )

    def __init__(self, x, y, **kwargs):
        super().__init__(
            radius=self.RADIUS,
            position=(x, y),
            friction=0.0,
            elasticity=1.0,
            color=self.COLOR,
            collision_type=utils.ColType.ENEMY,
            **kwargs,
        )

    def update(self):
        ...

    def draw(self, camera=pyxel):
        x, y = self.position
        camera.circb(x, y, self.radius, self.COLOR)

    def register(self, space, message):
        space.add(self)

        @space.begin_collision(utils.ColType.PLAYER, utils.ColType.ENEMY)
        def begin(arb: Arbiter):
            shape_a, shape_b = arb.shapes
            if shape_a.collision_type == utils.ColType.PLAYER:
                player, enemy = shape_a, shape_b
            else:
                player, enemy = shape_b, shape_b

            n = arb.normal_from(player)
            if n.y < 0.25:
                space.remove(enemy)
            else:
                message("hit_player", sender=self)

            return True