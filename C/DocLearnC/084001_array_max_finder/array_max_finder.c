#include <stdio.h>

int main(void)
{
	// for문을 이용해 int[5] 배열에 저장된 값 중 가장 큰 값을 찾아 출력
	// 최댓값이 저장된 변수는 int nMax로 선언.

	int nInput[5] = { 90, 20, 70, 40, 50 }, nMax = 0;

	for(int count = 0; count < 5; count++)
	{
		printf("%d  ", nInput[count]);
		if (nInput[count] > nMax)
			nMax = nInput[count];
	}

	printf("\nMAX: %d\n", nMax);

	return 0;
}