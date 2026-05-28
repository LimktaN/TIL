import time
import random
from turtle import Turtle, Screen

john = Turtle()
print(john)
john.shape("turtle")
john.color("red","green")
while True:
    john.forward(random.randint(1, 10))
    john.left(random.randint(1, 10))