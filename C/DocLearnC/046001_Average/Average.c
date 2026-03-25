#include <stdio.h>

int main(void)
{
	// 사용자로부터 두 정수를 입력 받아 평균을 출력하는
	// 예제를 작성. 입력은 반드시 scanf_s() 함수를
	// 사용하고 출력은 printf() 함수를 이용할 것.
	// 평균값 출력시 반드시 소수점 둘째 자리까지만 표시.

	int num1 = 0;
	int num2 = 0;

	printf("두 정수를 입력하세요.: ");
	scanf_s("%d%d", &num1, &num2);

	printf("AVG: %.2f\n", (num1 + num2) / (double)2);

	return 0;
}