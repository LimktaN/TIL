import random

lower_alphabets = ['a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z']

upper_alphabets = []

for alphabet in lower_alphabets:
    upper_alphabets.append(alphabet.upper())

alphabets = lower_alphabets + upper_alphabets
numbers = [str(i) for i in range(0, 10)]
symbols = ['!', '#', '$', '%', '&', '(', ')', '*', '+']

num_of_alphabet = 6
num_of_number = 4
num_of_symbol = 2

password = []

for i in range(0, num_of_alphabet):
    password.append(alphabets[random.randint(0, len(alphabets)-1)])

for i in range(0, num_of_number):
    password.append(numbers[random.randint(0, len(numbers)-1)])

for i in range(0, num_of_symbol):
    password.append(symbols[random.randint(0, len(symbols)-1)])

print(password)
print()

random.shuffle(password)
print(password)
print()

print("".join(password))