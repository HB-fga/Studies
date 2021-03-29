from pymunk.arbiter import Arbiter
from pymunk.vec2d import Vec2d
import pyxel
import random
from pymunk import Space, Body, Circle, Poly, Segment, Vec2d, BB

FPS = 30
WIDTH, HEIGHT = (256, 196)
SCREEN = Vec2d(WIDTH, HEIGHT)


class Game:
    PLAYER_SHAPE = [(0, -4), (-2, 2), (2, 2)]
    PLAYER_SPEED = 90

    def __init__(self):
        self.paused = True
        self.space = Space()

        # Cria jogadores
        x, y = WIDTH / 2, HEIGHT - 5
        self.player = Body(body_type=Body.KINEMATIC)
        self.player.position = SCREEN / 2

        shape = Poly(self.player, self.PLAYER_SHAPE)
        shape.elasticity = 1.0
        self.space.add(self.player, shape)

        # Cria bordas
        w, h = WIDTH, HEIGHT
        top = Segment(self.space.static_body, (0, 0), (w, 0), 1)
        left = Segment(self.space.static_body, (0, 0), (0, h), 1)
        right = Segment(self.space.static_body, (w, 0), (w, h), 1)
        top.elasticity = left.elasticity = right.elasticity = 1.0
        self.space.add(top, left, right)

    def update(self):
        dt = 1 / FPS
        self.space.step(dt)

        # Atualizar o estado da plataforma
        if pyxel.btn(pyxel.KEY_LEFT):
            self.player.velocity = (-self.PLAYER_SPEED, 0)
        elif pyxel.btn(pyxel.KEY_RIGHT):
            self.player.velocity = (self.PLAYER_SPEED, 0)
        else:
            self.player.velocity = (0, 0)

    def draw(self):
        pyxel.cls(pyxel.COLOR_BLACK)

        for shape in self.space.shapes:
            if isinstance(shape, Circle):
                x, y = shape.body.position
                r = shape.radius
                pyxel.circ(x, y, r, pyxel.COLOR_RED)
            elif isinstance(shape, Poly):
                transform = shape.body.local_to_world
                a, b, c = [transform(v) for v in shape.get_vertices()]
                pyxel.tri(*a, *b, *c, pyxel.COLOR_WHITE)



game = Game()
pyxel.init(WIDTH, HEIGHT, fps=FPS)
pyxel.mouse(True)
pyxel.run(game.update, game.draw)
