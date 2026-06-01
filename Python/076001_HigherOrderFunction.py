def add(num1, num2):
    return num1 + num2

def subtract(num1, num2):
    return num1 - num2

def multiply(num1, num2):
    return num1 * num2

def divide(num1, num2, is_floor = True):
    if is_floor:
        return num1//num2
    else:
        return num1/num2

def calc(num1, num2, func):
    return func(num1, num2)

print(calc(2, 5, multiply))

print()



def higher_order_example(func):
    
    def inside():
        print("start.....")
        func()
        print("end.....")
    
    return inside

@higher_order_example
def sample_example():
    print("I am inside")

sample_example()