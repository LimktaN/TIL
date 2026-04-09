#include <stdio.h>

int main(void)
{
	// for문을 사용해 int[5][5] 배열에 다음과 같이 저장하는 프로그램을 작성
	// 달팽이 순서로 저장

	int twoArray[5][5] = { 0 };
	int routine = 0, hIdx = 0, vIdx = 0;

	for (int num = 1; num <= 25; num++)
	{
		// 일단 숫자 입력
		twoArray[hIdx][vIdx] = num;

		// 끝까지 가면 routine을 변경하여 진행 방향을 변경한다.
		if (hIdx == 0 && vIdx == 0)
			routine = 0;
		else if ((routine == 0 || routine == 2) && (hIdx + vIdx) == 4)
			routine++;
		else if (routine == 1 && hIdx == vIdx)
			routine++;
		else if (routine == 3 && (hIdx - vIdx) == 1)
			routine++;
		
		routine %= 4;

		// routine으로 진행 방향을 파악한다.
		// 0 -> 오른쪽 (열 증가)
		// 1 -> 아래 (행 증가)
		// 2 -> 왼쪽 (열 감소)
		// 3 -> 위 (행 감소)
		switch (routine) {
			case 0:
				vIdx++;
				break;
			case 1:
				hIdx++;
				break;
			case 2:
				vIdx--;
				break;
			case 3:
				hIdx--;
				break;
			default:
				break;
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