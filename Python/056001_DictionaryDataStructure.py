# key value
dic = {
    "country": "South Korea",
    "city": "Seoul",
    "gender": "Male",
    "age": "30"
}

print(dic["country"])

for key, value in dic.items():
    print(f"{key}, {value}")

for key in dic:
    print(f"{key}: {dic[key]}")

print(dic.keys())
print(dic.values())

# Error
# print(dic["name"])

dic1 = {
    1: 1
}
print(dic1[1])