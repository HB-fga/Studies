import pyxel
from pymunk import Space, Body, Circle, Poly, Segment, BB
import random

FPS = 30

def make_ball(x, y):

    def update():
        nonlocal paused
        if paused and pyxel.btnp(pyxel.KEY_SPACE):
            vx = random.choice([-speed, speed])
            vy = random.choice([-speed, speed])
            body.velocity = (vx, vy)
            paused = False

    body = Body()
    body.position = (x, y)
    shape = Circle(body, 3)
    shape.density = 1.0
    shape.elasticity = 1.0

    body.update = update
    paused = True
    speed = 50

    return body, shape

def make_player(x, y, vx=0, vy=0, up=pyxel.KEY_UP, down=pyxel.KEY_DOWN, color=pyxel.COLOR_WHITE):
    speed = 30
    
    def update():
        if pyxel.btn(up):
            body.velocity = (0, -speed)
        elif pyxel.btn(down):
            body.velocity = (0, speed)
        else:
            body.velocity = (0, 0)
    
    body = Body(body_type=Body.KINEMATIC)
    body.update = update
    body.position = (x, y)

    w = 4
    h = 20
    a, b = w / 2, h / 2

    shape = Poly(body, [(-a, -b), (a, -b), (a, b), (-a, b)])
    shape.elasticity = 1.0

    return body, shape

def make_borders():
    w, h = 180, 120
    top = Segment(space.static_body, (0, 0), (w, 0), 1)
    bottom = Segment(space.static_body, (0, h), (w, h), 1)
    top.elasticity = bottom.elasticity = 1.0

    return top, bottom

def update():

    dt = 1 / FPS

    for body in space.bodies:
        if hasattr(body, 'update'):
            body.update()

    space.step(dt)
        

def draw():
    pyxel.cls(pyxel.COLOR_BLACK)

    pyxel.line(0, 0, 180, 0, pyxel.COLOR_RED)
    pyxel.line(0, 119, 180, 119, pyxel.COLOR_RED)


    for shape in space.shapes:
        if isinstance(shape, Circle):
            x, y = shape.body.position
            r = shape.radius
            pyxel.circ(x, y, r, pyxel.COLOR_RED)
        elif isinstance(shape, Poly):
            bb: BB = shape.bb
            x = bb.left
            y = bb.bottom
            w = bb.right - bb.left
            h = bb.top - bb.bottom  
            pyxel.rect(x, y, w, h, pyxel.COLOR_WHITE)



space = Space()

space.add(
    *make_ball(90, 60),
    *make_player(5, 60, up=pyxel.KEY_W, down=pyxel.KEY_S),
    *make_player(175, 60, up=pyxel.KEY_UP, down=pyxel.KEY_DOWN),
    *make_borders(),
)

pyxel.init(180, 120)
pyxel.mouse(True)
pyxel.run(update, draw)