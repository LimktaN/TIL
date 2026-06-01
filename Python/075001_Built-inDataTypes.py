# 1. List: [] / 변경 가능
my_list = [ 1, 2, 3 ]
my_list.append(4)
print(my_list)
my_list[1] = 0
print(my_list)

print()

# 2. Dictionary: {} / 변경 가능
my_dictionary = {
    "country": "south korea",
    "city": "seoul"
}
print(my_dictionary)
my_dictionary['country'] = "USA"
print(my_dictionary)

print()

# 3. Set: {}
my_set1 = set((1, 2, 3))
print(my_set1)

print()

# 중복값 제거, unique 값 출력
l = [1, 2, 3, 4, 4, 3, 2, 1, 1, 3, 2, 4]
print(l)
print(list(set(l)))

my_set2 = { 1, 2, 3 }
print(my_set2)
my_set2.add(4)
print(my_set2)
my_set2.remove(4)

print()

# 4. Tuples: ()
my_tuples = (1, 2, 3)
print(my_tuples)
print(my_tuples[1])

print()