import pyxel
from easymunk import Space, Body, Circle, Vec2d
from easymunk import pyxel as phys

WIDTH, HEIGHT = 256, 196

class Game:
    PLAYER_SPEED = 60
    JUMP_SPEED = 90
    def __init__(self):
        self.camera = phys.Camera(flip_y=True)
        self.space = phys.space(
            gravity=(0, 100),
            wireframe=True,
            elasticity=1.0
        )
        self.player = phys.circ(50, 50, 3, color=pyxel.COLOR_RED, elasticity=0.0)
        self.can_jump = False
        phys.rect(0, 175, 1000, 20, body_type="static")
    
    def draw(self):
        pyxel.cls(pyxel.COLOR_BLACK)
        self.space.draw()

    def update(self):
        self.space.step(1 / 30, 2)

        v = self.player.velocity

        if(pyxel.btn(pyxel.KEY_LEFT)):
            v = Vec2d(-self.PLAYER_SPEED, v.y)

        elif(pyxel.btn(pyxel.KEY_RIGHT)):
            v = Vec2d(self.PLAYER_SPEED, v.y)
        else:
            r = 0.75 if self.can_jump else 1.0
            v = Vec2d(v.x * r, v.y)

        if self.can_jump and pyxel.btnp(pyxel.KEY_UP):
            v = Vec2d(v.x, self.JUMP_SPEED)
        self.player.velocity = v

pyxel.init(WIDTH, HEIGHT)
pyxel.mouse(True)
game = Game()
pyxel.run(game.update, game.draw)