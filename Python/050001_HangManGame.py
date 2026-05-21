# hangman
# Here is the word [ _, _, _, _, _, _ ]
# Guess the char?
# [ b, _, t, m, a, _ ]
# [ b, a, t, m, a, n ]

# 유저에게 알파벳을 입력 받을 변수 선언
alphabet = ''

# 유저의 정답을 기록할 배열 선언
user_answer = [ '_', '_', '_', '_', '_', '_' ]

# 정답을 비교할 배열 선언
answer = [ 'b', 'a', 't', 'm', 'a', 'n' ]

# 패배 카운트를 위한 변수 2개 선언
count = 0
lose_count = 0

# 유저가 정답을 맞추거나 패배할 때까지 반복 선언
while (user_answer != answer) and (lose_count != 6):

    # 우선 현재 유저의 정답을 보여줌
    print(user_answer)

    # 유저에게 알파벳을 받음 (일단 무조건 소문자 입력만 한다는 가정하에 진행...)
    alphabet = input("Guess the char ?")
    print()

    # 유저가 말한 알파벳이 정답에 포함되는지 판단
    for i in range(0, len(answer)):
        
        # 일치한다면 유저의 정답에 기록
        if(answer[i] == alphabet):
            user_answer[i] = alphabet
        # 일치하지 않는 다면 정답 실패를 위한 카운트 기록
        else:
            count += 1
    
    # 만약 정답 실패라면 패배 카운트를 증가 (사람의 몸이 그려짐)
    if(count == 6):
        lose_count += 1
    
    # 다시 실패 판단을 위한 변수 선언
    count = 0

# 우선 정답을 공개
print(f"Answer is {answer}")

# 패배했다면 패배 선언
if(lose_count == 6):
    print("YOU LOSE!")
# 승리했다면 승리 선언
else:
    print("YOU WIN !")