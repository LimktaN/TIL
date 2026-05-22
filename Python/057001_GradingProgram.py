# 90점 이상 A, 80점 이상 B, 70점 이상 C, 그 외 나머지 F

students = {
    "tom": 90,
    "jerry": 89,
    "joon": 80,
    "misha": 79,
    "amy": 70,
    "max": 69
}

def grading(score):
    if(score >= 90):
        return 'A'
    elif(score >= 80):
        return 'B'
    elif(score >= 70):
        return 'C'
    else:
        return 'F'

for name, score in students.items():
    print(f"{name}'s score is {score}.")
    print(f"then, {grading(score)}")