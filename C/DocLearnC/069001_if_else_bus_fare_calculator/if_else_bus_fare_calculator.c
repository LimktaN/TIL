#include <stdio.h>

int main(void)
{
	// 버스 기본 요금을 1000원이라고 가정하고 나이에 따라
	// 다음과 같이 요금 할인율을 적용
	// 0 ~ 3세 / 영유아 / 100% (무료)
	// 4 ~ 13세 / 어린이 / 50%
	// 14 ~ 19세 / 청소년 / 25%
	// 20 이상 / 성인 / 0%

	int age = 0, pay = 1000;

	scanf_s("%d", &age);

	if (age >= 14)
	{
		if (age < 20)
			pay *= 0.75;
	}
	else
	{
		if (age <= 3)
			pay *= 0;
		else pay *= 0.5;
	}

	printf("나이: %d, 최종요금: %d원\n", age, pay);

	return 0;
}