#include <stdio.h>

int main(void)
{
	// 1~10까지 총합을 출력하는 프로그램을 작성.
	// while문과 for문으로 각각 작성하며
	// 반복횟수는 10회로 제한.
	// 반드시 총합을 누적하는 변수를 사용할 것.

	int wNum = 0, wSum = 0;

	while (wNum <= 10)
	{
		wSum += wNum;
		//printf("wSum = %d / wNum = %d\n", wSum, wNum);
		wNum++;
	}

	printf("while 문의 총합: %d\n\n", wSum);
	printf("======================\n\n");

	int fNum = 0, fSum = 0;

	for (; fNum <= 10; fNum++)
	{
		fSum += fNum;
		//printf("fSum = %d / fNum = %d\n", fSum, fNum);
	}

	printf("for 문의 총합: %d\n", fSum);

	return 0;
}