value = 10.0

if isinstance(value, int) and value > 5:
    print("Correct")
else:
    print("Incorrect")


if not isinstance(value, float):
        print(f"{value} is not a float")
else:
        print(f"{value} is a float")


# 정리
# and : 논리곱 (둘 다 참이어야 참)
# or : 논리합 (둘 중 하나만 참이어도 참)
# not : 논리 부정 (참이면 거짓, 거짓이면 참)