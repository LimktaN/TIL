is_this_prime_number = int(input("Enter the Number: "))

# 입력한 수가 소수인지 판단하는 함수 선언
def prime_number_search1(number):

    # 약수가 존재하는지 판단할 배열 선언
    prime_number_list = []

    # 약수를 배열에 저장
    for i in range(1, number):
        i += 1
        if(number % i == 0):
            prime_number_list.append(i)

    if(len(prime_number_list) == 1):
        print(f"{number} is Prime Number.")
    else:
        print(f"{number} is Not Prime Number.")
    
    return 0

# 0부터 입력한 수까지의 소수들을 찾는 함수 선언
def prime_number_search2(number):

    # 소수를 저장할 배열 선언
    prime_number_list = []

    # 소수 찾기
    for i in range(1, number):

        # 소수인지 확인할 숫자를 +1 (2부터 시작 + 반복할때마다 1 증가)
        i+=1
        
        # 소수인지 판단할 숫자 선언
        count = 0

        # 소수인지 판단 (2부터 i 값까지 나눠서 0이 나오면 count 1 증가)
        for j in range(1, i):

            # 소수인지 확인할 숫자에 나눌 숫자를 +1 (2부터 시작 + 반복할때마다 1 증가)
            j += 1

            # 나눈 나머지가 0이라면 count + 1
            if(i % j == 0):
                count += 1
        
        # 즉, count == 1 이라는 건 본인 숫자와 나눴을때만 나머지가 0이라는 뜻이므로 소수이므로 소수 배열에 추가
        if (count == 1):
            prime_number_list.append(i)

    # 소수 배열을 출력
    return print(prime_number_list)


# 함수 출력
# 1로 하면 입력한 수가 소수인지 확인
# 2로 하면 입력한 수까지의 소수 모두 찾기
prime_number_search1(is_this_prime_number)
