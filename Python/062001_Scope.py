my_score = 50

def inside_value_function():
    global my_score # global을 사용하면 함수 바깥에 나가서도 그대로 사용
    my_score = 80 # 바깥에 선언된 변수와 다른 변수. (신규 발급하는 변수)
    print(f"my score inside is {my_score}")

inside_value_function()
print(f"my score outside is {my_score}")



did_extra_work = True
if did_extra_work:
    my_score = 90

print(f"my score outside is {my_score}")



def a():
    x = 10
    def b():
        nonlocal x # 가장 가까운 함수에 존재하는 변수를 사용. (global 보다 하위 버전?)
        x = 20
    b()
    print(x)

a()


# 1. local

# 2. enclosing

# 3. global
# print(globals())

# 4. built-in
# print(dir(__builtins__))