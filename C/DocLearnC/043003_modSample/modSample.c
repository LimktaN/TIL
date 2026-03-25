#include <stdio.h>

int main(void)
{
	int x = 0;
	scanf_s("%d", &x);

	printf("3으로 나눈 몫: %d\n", x / 3);
	printf("3으로 나눈 나머지: %d\n", x % 3);

	printf("3으로 나눈 double 몫 : %f\n", (double)x / 3);
	// 정수와 실수를 나눈 경우, 실수값으로 떨어짐. 표현 범위가 더 넓어서

	return 0;
}