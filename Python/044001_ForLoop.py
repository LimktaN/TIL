# 1. 리스트의 요소들을 하나씩 출력
alphabets = ['a', 'b', 'c', 'd', 'e']

for alphabet in alphabets:
    print(alphabet)
    print(f"{alphabet} is char")

# 2. 문자열의 요소들을 하나씩 출력
for char in "South Korea":
    print(char)

# 3. 리스트 내 숫자들의 평균 구하기
numbers = [1, 2, 3, 4, 5]
sum = 0
for number in numbers:
    sum += number
print(sum / len(numbers))

# 4. 리스트 내 숫자들의 최대값 구하기
numbers = [1, 2, 3, 4, 5]
max_num = 0

for number in numbers:
    if number > max_num:
        max_num = number
print(f"max_num: {max_num}")

# max 함수 사용하기
print(max(numbers))
print(max(1, 5))


# 5. 1부터 10까지의 합 구하기
sum = 0
for i in range(1, 11):
    sum += i
print(sum)

# 6. 홀수 구하기
for i in range(1, 11, 2):
    print(i)