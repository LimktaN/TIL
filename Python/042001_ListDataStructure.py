# 1. 리스트 선언 후 출력
countries = ["South Korea", "USA", "Japan", "China"]

print(countries)


# 2. 리스트 값 변경 후 출력
countries[2] = "Vietnam"

print(countries)


# 3. 리스트에 변수 값으로 선언 후 출력
element = "c"
alphabets = ["a", element, "e"]

print(alphabets)


# 4. 리스트에 값 추가 후 출력
alphabets.append("f")

print(alphabets)


alphabets += ["g", "h"]

print(alphabets)


alphabets.insert(0, "z")

print(alphabets)


# 5. 리스트에서 원하는 순번의 값 출력
print(alphabets[0])
print(alphabets[-1])


# 6. 리스트에서 값 제거 후 출력
print(countries.pop())
print(countries)

print(countries.pop(0))
print(countries)