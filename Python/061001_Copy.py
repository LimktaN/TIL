colors = ['red', 'green', 'blue']
b = colors # color의 값이 아닌 주소를 카피
b.append('yellow')
print(colors)
print(b) # 결국 colors와 동일

print("")

a = [[1,2], [2,4]]
b = a[:] ## shallow copy, 새로운 컴포넌트를 만들지만 내부 요소는 a의 주소를 포인팅 하고 있음
b.append([3,6])
print(a)
print(b) # 즉, a의 리스트와 b에 새로 추가한 요소가 출력됨

print("")

b[0].append(3)
print(a) # 위 b에서 첫번째 요소는 a의 주소를 포인팅하고 있으므로 a의 요소가 바뀜
print(b) # 출력했을땐 바뀐 a의 요소와 b에 추가된 요소를 출력

print("")

a = [[1, 2], [2, 4]]
import copy
b = copy.deepcopy(a) # deep copy, a를 그대로 복사하여 b에 붙여넣음, 이전과 다르게 완전 다른 리스트라고 보면 됨
b[0].append(4) # 즉, 여기서 b에 추가한다면 a에는 전혀 영향이 없음
print(a)
print(b)

print("")

#simple list
a = [1, 2, 3, 4]
b = a[:]
b.append(5)
print(a)
print(b)