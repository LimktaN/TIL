#include <stdio.h>

int main(void)
{
	// for문을 사용해 int[5][5] 배열에 다음과 같이 저장하는 프로그램을 작성
	// 다음 행으로 진행할때마다 교차해서 저장
	//
	// 예시)
	// 1, 2, 3, 4, 5
	// 10, 9, 8, 7, 6

	int twoArray[5][5] = { 0 };
	int count = 1;

	for (int i = 0; i < 5; i++)
	{
		if ((i % 2) == 0)
		{
			for (int j = 0; j < 5; j++)
				twoArray[i][j] = count++;
		}
		else
		{
			for (int j = 4; j >= 0; j--)
				twoArray[i][j] = count++;
		}
	}

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			printf("%d\t", twoArray[i][j]);
		}
		printf("\n");
	}

	return 0;
}