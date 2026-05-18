# Chapter 02-1
# 파이썬 완전 기초
# Print 사용법

# 기본 출력
print('Hello World')
print("Python Start!")

print('''Python Start!''')
print("""Python Start!""")

print()


# separator 옵션
# 구분자 추가
print('T', 'E', 'S', 'T', sep=',')
print('2020', '02', '20', sep='-')

print()


# end 옵션
print('Welcome To', end='           ')
print('IT News', end=' ')

print()


# file 옵션
import sys

print('Learn Python', file=sys.stdout)
print('Learn Python', file=sys.stderr)

print()


# format 사용
# d: 정수, s: 문자열, f: 실수
print('%s %s' % ('one', 'two'))
print('{} {}'.format('one', 'two'))
print('{1} {0}'.format('one', 'two'))

print()

# %s
print('%10s' % ('nice'))
print('{:>10}'.format('nice'))

print('%-10s' % ('nice'))
print('{:10}'.format('nice'))

print('{:_>10}'.format('nice'))
print('{:^10}'.format('nice'))

print('%.5s' % ('nice'))
print('%.5s' % ('python study'))
print('{:10.5}'.format('python study'))

print()

# %d
print('%d %d' % (1 , 2))
print('{} {}'.format(1, 2))

print('%4d' % (42))
print('{:4d}'.format(42))


# %f
print('%f' % (3.141592653589793))
print('{:f}'.format(3.141592653589793))

print('%06.2f' % (3.141592653589793))
print('{:06.2f}'.format(3.141592653589793))