import utils

import random
from typing import Callable
from abc import ABC, abstractmethod
import enum
import pyxel
from easymunk import Vec2d, Arbiter, CircleBody, Space, march_string
from easymunk import pyxel as phys

class Player(utils.GameObject, CircleBody):
    SPEED = 90
    JUMP_SPEED = 120
    COLOR = pyxel.COLOR_RED

    def __init__(self, x, y):
        super().__init__(
            radius=4,
            position=(x, y),
            elasticity=0.0,
            collision_type=utils.ColType.PLAYER,
        )
        self.can_jump = False

    def update(self):
        v = self.velocity
        mass = self.mass
        F = mass * 200
        self.force += Vec2d(0, -mass * 200)

        if pyxel.btn(pyxel.KEY_LEFT):
            if self.can_jump:
                v = Vec2d(-self.SPEED, v.y)
            elif v.x <= 0:
                v = Vec2d(-self.SPEED / 2 / 2, v.y)
        elif pyxel.btn(pyxel.KEY_RIGHT):
            if self.can_jump:
                v = Vec2d(+self.SPEED, v.y)
            elif v.x <= 0:
                v = Vec2d(+self.SPEED / 2, v.y)
        else:
            r = 0.5 if self.can_jump else 1.0
            v = Vec2d(v.x * r, v.y)

        if self.can_jump and pyxel.btnp(pyxel.KEY_UP):
            v = Vec2d(v.x, self.JUMP_SPEED)

        self.velocity = v

    def draw(self, camera=pyxel):
        x, y, _right, _top = self.bb
        sign = 1 if self.velocity.x >= 0 else -1

        frames = pyxel.frame_count

        # print (self.velocity)

        if self.can_jump :
            if self.velocity.x < -1 or self.velocity.x > 1:
                idx = int(self.position.x / 2) % 4
                u = 8 * idx
                camera.blt(x, y, 0, u, 0, sign * 8, 8, pyxel.COLOR_YELLOW)
            else: 
                if frames % 50 > 2 and frames % 50 < 6:
                    camera.blt(x, y, 0, 8, 16, sign * 8, 8, pyxel.COLOR_YELLOW)
                elif frames % 50 < 3 or (frames % 50 > 5 and frames % 50 < 9) :
                    camera.blt(x, y, 0, 0, 16, sign * 8, 8, pyxel.COLOR_YELLOW)
                else:
                    camera.blt(x, y, 0, 0, 0, sign * 8, 8, pyxel.COLOR_YELLOW)
        else:
            u = 8
            camera.blt(x, y, 0, 8, 8, sign * 8, 8, pyxel.COLOR_YELLOW)



        

    def register(self, space, message):
        space.add(self)

        @space.post_solve_collision(utils.ColType.PLAYER, ...)
        def _col_start(arb: Arbiter):
            n = arb.normal_from(self)
            self.can_jump = n.y <= -0.5

        @space.separate_collision(utils.ColType.PLAYER, ...)
        def _col_end(arb: Arbiter):
            self.can_jump = False

        @space.begin_collision(utils.ColType.PLAYER, utils.ColType.TARGET)
        def _game_end(arb: Arbiter):
            message("hit_target", sender=self)
            return False