import pyxel
from math import sqrt
import random

class Body:
    def __init__(self, x, y, vx=0, vy=0, color=pyxel.COLOR_WHITE):
        self.x = x
        self.y = y
        self.vx = vx
        self.vy = vy
        self.color = color

    def update(self):
        self.x += self.vx
        self.y += self.vy

    def draw(self):
        raise NotImplementedError

class Ball(Body):
    speed = 1.5

    def __init__(self, x, y, vx=0, vy=0, color=pyxel.COLOR_WHITE, radius=3) -> None:
        super().__init__(x, y, vx, vy)
        self.radius = radius

    def update(self):
        if self.vx == 0 and self.vy == 0 and pyxel.btnp(pyxel.KEY_SPACE):
            speed = self.speed
            self.vx = random.choice([-speed, speed])
            self.vy = random.choice([-speed, speed])

        # colisao com as paredes
        if self.y - self.radius < 0 and self.vy < 0:
            self.vy *= -1
        if self.y + self.radius > pyxel.height and self.vy > 0:
            self.vy *= -1

        # colisao com as paddles
        if self.vx < 0:
            if ((player1.y - player1.h/2 < self.y < player1.y + player1.h/2) and (self.x - self.radius <= player1.x)):
                self.vx *= -1

        if self.vx > 0:
            if ((player2.y - player2.h/2 < self.y < player2.y + player2.h/2) and (self.x + self.radius >= player2.x)):
                self.vx *= -1

        super().update()

    def draw(self):
        pyxel.circ(self.x, self.y, self.radius, self.color)

    # def click(self, x, y):
    #     dx = x - self.x
    #     dy = y - self.y

    #     if sqrt(dx**2 + dy**2) < self.radius:
    #         ...    

class Paddle(Body):
    speed = 1
    w = 3
    h = 20

    def __init__(self, x, y, vx=0, vy=0, up=pyxel.KEY_UP, down=pyxel.KEY_DOWN, color=pyxel.COLOR_WHITE):
        super().__init__(x, y, vx, vy)
        self.up = up
        self.down = down

    def update(self):
        if pyxel.btn(self.up):
            self.vy = -self.speed
        elif pyxel.btn(self.down):
            self.vy = self.speed
        else:
            self.vy = 0

        super().update()

    def draw(self):
        pyxel.rect(self.x - (self.w/2), self.y - (self.h/2), self.w, self.h, self.color)


def update():

    for obj in objects:
        obj.update()
        

def draw():
    pyxel.cls(pyxel.COLOR_BLACK)

    pyxel.line(0, 0, 180, 0, pyxel.COLOR_RED)
    pyxel.line(0, 119, 180, 119, pyxel.COLOR_RED)


    for obj in objects:
        obj.draw()   




player1 = Paddle(5, 60, up=pyxel.KEY_W, down=pyxel.KEY_S)
player2 = Paddle(175, 60, up=pyxel.KEY_UP, down=pyxel.KEY_DOWN)

objects = [Ball(90, 60), player1, player2]

pyxel.init(180, 120)
pyxel.mouse(True)
pyxel.run(update, draw)