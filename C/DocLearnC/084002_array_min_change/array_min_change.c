#include <stdio.h>

int main(void)
{
	// for문을 이용해 int[5] 배열에 저장된 값 중 가장 작은 값을 찾아 출력
	// int[0] 에 최솟값이 저장되도록 하고 두 배열 요소의 값은 덮어써서 사라지지 않도록 교환.

	/*
	int nInput[5] = { 10, 20, 30, 4, 50 }, address = 0, nMin = 0;

	printf("AS-IS Array:  ");
	for (int count = 0; count < 5; count++)
	{
		// 이전 배열을 확인하기 위한 출력
		printf("%d  ", nInput[count]);

		// 처음이라면 첫 값을 저장
		if (count == 0)
		{
			nMin = nInput[count];
		} // 최솟값의 위치와 값 저장
		else if (nInput[count] < nMin)
		{
			nMin = nInput[count];
			address = count;
		}
	}

	// 저장한 값들로 교환 시도
	nInput[address] = nInput[0];
	nInput[0] = nMin;

	// 교환된 최종 배열 값 출력
	printf("\n\nTO-BE Array:  ");
	for (int count = 0; count < 5; count++)
	{
		printf("%d  ", nInput[count]);
	}
	*/ // 잘못 이해했음


	int nInput[5] = { 50, 40, 30, 20, 10 }, temp = 0;

	for (int count2 = 0; count2 < 5; count2++)
	{
		if (count2 == 0)
		{
			printf("Array: %d  ", nInput[count2]);
		}
		else if (count2 == 4)
		{
			printf("%d\n", nInput[count2]);
		}
		else
		{
			printf("%d  ", nInput[count2]);
		}
	}

	for (int count = 0; count < 5; count++)
	{
		if (nInput[count] < nInput[0])
		{
			temp = nInput[count];
			nInput[count] = nInput[0];
			nInput[0] = temp;

			for (int a = 0; a < 5; a++)
			{
				if (a == 0)
				{
					printf("Array: %d  ", nInput[a]);
				}
				else if (a == 4)
				{
					printf("%d\n", nInput[a]);
				}
				else
				{
					printf("%d  ", nInput[a]);
				}
			}
		}
	}

	return 0;
}