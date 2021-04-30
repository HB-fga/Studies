import random
from typing import Callable
from abc import ABC, abstractmethod
import enum
import pyxel
from easymunk import Vec2d, Arbiter, CircleBody, Space, march_string
from easymunk import pyxel as phys

WIDTH, HEIGHT = 256, 196
SCENARIO = """
|
|
|
|
|                                              =
|                                              ==
|                     ===                      ===
|                                              ====
|            ===   ===             ===         =====
|                                  ===
|=====    ===                      ===
|X
|X
"""

class ColType(enum.IntEnum):
    PLAYER = 1
    ENEMY = 2
    TARGET = 3


class GameState(enum.IntEnum):
    RUNNING = 1
    GAME_OVER = 2
    HAS_WON = 3


class GameObject(ABC):
    @abstractmethod
    def update(self):
        ...
    
    @abstractmethod
    def draw(self):
        ...

    @abstractmethod
    def register(self, space: Space, message: Callable[[str, "GameObject"], None]):
        ...