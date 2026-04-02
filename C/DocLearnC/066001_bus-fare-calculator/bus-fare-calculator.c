#include <stdio.h>

int main(void)
{
	// 버스 기본 요금을 1000원이라고 가정하고
	// 20세 미만은 25% 할인
	// 20세 이상은 할인 없이
	// 나이와 최종 버스 요금을 출력할 것.
	// 단, 20세 이상인 경우 강제로 20세로 출력할 것.

	int age = 0, pay = 1000;

	scanf_s("%d", &age);
	
	if (age >= 20)
		age = 20;

	if (age < 20)
		pay *= 0.75;

	printf("나이: %d, 최종요금: %d원\n", age, pay);

	return 0;
}