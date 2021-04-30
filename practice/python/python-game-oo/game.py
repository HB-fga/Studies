import utils
import player
import enemy

import random
from typing import Callable
from abc import ABC, abstractmethod
import enum
import pyxel
from easymunk import Vec2d, Arbiter, CircleBody, Space, march_string
from easymunk import pyxel as phys

class Game:
    # Cores

    # Outras propriedades
    CAMERA_TOL = Vec2d(utils.WIDTH / 2 - 64, utils.HEIGHT / 2 - 48)
    N_ENEMIES = 20

    def __init__(self, scenario=utils.SCENARIO):
        self.camera = phys.Camera(flip_y=True)
        self.space = phys.space(
            gravity=(0, -25),
            wireframe=True,
            camera=self.camera,
            elasticity=1.0,
        )

        # Inicializa o jogo
        self.state = utils.GameState.RUNNING
        pyxel.load("assets.pyxres")

        # Cria jogador
        self.my_player = player.Player(50, 50)
        self.my_player.register(self.space, self.message)

        # Cria chão
        f = phys.rect(0, 0, 1000, 48, body_type="static")

        # Cria cenário
        for line in march_string(
            scenario, "=", scale=8.0, translate=Vec2d(0.0, 48), flip_y=True
        ):
            line = [Vec2d(2 * x, y) for (x, y) in line]
            phys.poly(line, body_type="static", color=pyxel.COLOR_PEACH)

        # Cria sensor para condição de vitória
        phys.rect(
            1000 - 16,
            48,
            16,
            16,
            collision_type=utils.ColType.TARGET,
            sensor=True,
            body_type="static",
        )

        # Cria margens
        phys.margin(0, 0, 1000, utils.HEIGHT)

        # Cria inimigos
        for _ in range(self.N_ENEMIES):
            my_enemy = enemy.Enemy.random(0, 1000, utils.HEIGHT / 2, utils.HEIGHT)
            my_enemy.register(self.space, self.message)

    def message(self, msg, sender):
        fn = getattr(self, f'handle_{msg}', None)
        if fn is None:
            print(f'Mensagem desconhecida: "{msg} ({sender})')
        else:
            fn(sender)

    def handle_hit_player(self, sender):
        self.state = utils.GameState.GAME_OVER

    def handle_hit_target(self, sender):
        self.state = utils.GameState.HAS_WON

    def draw(self):
        pyxel.cls(0)
        for body in self.space.bodies:
            if isinstance(body, (player.Player, enemy.Enemy)):
                body.draw(self.camera)
            else:
                self.camera.draw(body)

        msg = ""
        if self.state is utils.GameState.GAME_OVER:
            msg = "GAME OVER"
        elif self.state is utils.GameState.HAS_WON:
            msg = "PARABENS!"

        if msg:
            x = (utils.WIDTH - len(msg) * pyxel.FONT_WIDTH) / 2
            pyxel.text(round(x), utils.HEIGHT // 2, msg, pyxel.COLOR_YELLOW)

    def update(self):
        self.space.step(1 / 30, 2)
        if self.state is not utils.GameState.GAME_OVER:
            self.my_player.update()
        self.camera.follow(self.my_player.position, tol=self.CAMERA_TOL)


pyxel.init(utils.WIDTH, utils.HEIGHT)
pyxel.mouse(True)
game = Game()
pyxel.run(game.update, game.draw)