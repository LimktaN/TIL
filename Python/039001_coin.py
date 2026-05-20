import random

random_value = random.randint(1, 10)

if random_value % 2 == 0:
    print(f"{random_value}, You get Head")
else:
    print(f"{random_value}, You get Tail")