#include <stdio.h>

int main(void)
{
	// for문을 사용해 int[5][5] 배열에 다음과 같이 저장하는 프로그램을 작성

	int twoArray[5][5] = { 0 };

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			twoArray[i][j] = (i+1) * (j+1);
			printf("%d\t", twoArray[i][j]);
		}
		printf("\n");
	}

	return 0;
}