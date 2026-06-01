class Car:
    # default input
    def __init__(self, color, engine_type):
        self.color = color
        self.engine_type = engine_type

tesla = Car("green", "electric")
# tesla.color = "red"
# tesla.engine_type = "electric"

print(vars(tesla))


# def __init__(self):