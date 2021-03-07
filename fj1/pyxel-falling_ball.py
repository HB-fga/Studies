import pyxel
from math import sqrt

#             -y
#             |
#             |
#             |
#             |
#             |
# -x__________|__________+x
#             |
#             |
#             |
#             |
#             |
#             +y

x, y = 90, 20
radius = 5
vel = 0.0

def update():
    global y
    global vel
    global radius

    if pyxel.btnp(pyxel.MOUSE_LEFT_BUTTON):
        dx = pyxel.mouse_x - x
        dy = pyxel.mouse_y - y

        if sqrt(dx**2 + dy**2) < radius:
            vel += 0.1
            y = 20


    y  += vel

def draw():
    pyxel.cls(pyxel.COLOR_BLACK)

    color = pyxel.COLOR_WHITE
    if vel == 0:
        color = pyxel.COLOR_RED

    pyxel.circ(x, y, 5, color)

    pyxel.text(5, 110, "Score: " + str(vel), pyxel.COLOR_LIME)



pyxel.init(180, 120)
pyxel.mouse(True)
pyxel.run(update, draw)