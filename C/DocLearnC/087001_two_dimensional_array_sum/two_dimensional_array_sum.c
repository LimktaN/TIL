#include <stdio.h>

int main(void)
{
	// 각 행/열의 총합을 마지막 행/열에 저장 후 출력하는 코드 작성

	// 배열 선언 + 임시로 총합을 저장할 변수 선언
	int aList[3][4] = {
		{10, 20, 30},
		{40, 50, 60}
	};
	int sumTemp = 0;

	// 행의 총합을 마지막 열에 저장
	for (int i = 0; i < 3; i++)
	{
		sumTemp = 0;
		for (int j = 0; j < 3; j++)
		{
			sumTemp += aList[i][j];
		}
		aList[i][3] = sumTemp;
	}

	// 열의 총합을 마지막 행에 저장
	for (int i = 0; i < 4; i++)
	{
		sumTemp = 0;
		for (int j = 0; j < 3; j++)
		{
			sumTemp += aList[j][i];
		}
		aList[2][i] = sumTemp;
	}


	// 최종 확인
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d  ", aList[i][j]);
		}
		printf("\n");
	}

	return 0;
}