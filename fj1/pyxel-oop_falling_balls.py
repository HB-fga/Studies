import pyxel
from math import sqrt

class Ball:
    def __init__(self, x=90, y=20, radius=5, vel=0, color=pyxel.COLOR_WHITE) -> None:
        self.x = x
        self.y = y
        self.radius = radius
        self.vel = vel
        self.color = color

    def click(self, x, y):
        dx = x - self.x
        dy = y - self.y

        if sqrt(dx**2 + dy**2) < self.radius:
            self.vel += 0.2
            self.y = 20

    def draw(self):
        pyxel.circ(self.x, self.y, self.radius, self.color)

    def update(self):
        self.y += self.vel


def update():

    for ball in balls:
        ball.update()
        if pyxel.btnp(pyxel.MOUSE_LEFT_BUTTON):
            ball.click(pyxel.mouse_x, pyxel.mouse_y)
        

def draw():
    pyxel.cls(pyxel.COLOR_BLACK)

    for ball in balls:
        ball.draw()   
        pyxel.text(ball.x, 1, str(int(ball.vel)), pyxel.COLOR_LIME)



balls = [Ball(10 + i) for i in range(0, 170, 25)]
pyxel.init(180, 120)
pyxel.mouse(True)
pyxel.run(update, draw)