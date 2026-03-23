#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 사용자로부터 이름과 나이를 입력받아
	// 출력하는 프로그램을 작성
	// 이름은 gets_s(), 나이는 scanf_s() 함수로 입력
	// 받고 printf() 함수로 출력

	char szName[32] = { 0 };
	int nAge = 0;

	printf("나이를 입력하세요:");
	scanf_s("%d%*c", &nAge); // %*c는 버퍼에 남아있는 개행 문자를 삭제
	
	printf("이름을 입력하세요:");
	gets_s(szName, (unsigned)_countof(szName));
	
	printf("당신의 나이는 %d살이고 이름은 \"%s\"입니다.\n", nAge, szName);

	return 0;
}