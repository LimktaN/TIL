#include <stdio.h>

int main(void)
{
	// for문을 사용해 int[5] 배열에 저장된 값들을 오름차순 정렬하는 프로그램 작성
	// 정렬 방식은 선택 정렬 알고리즘을 사용

	int nInput[5] = { 30, 40, 20, 50, 10 }, nMin = 0, temp = 0;

	// 최초 값 확인용 출력
	for (int count = 0; count < 5; count++)
	{
		printf("%d  ", nInput[count]);
	}

	printf("\n\n");

	for (int i = 0; i < 5; i++)
	{
		nMin = i;
		for (int j = i; j < 5; j++)
		{			
			// 비교하여 작은 수의 인덱스 순번 저장
			if (nInput[j] < nInput[nMin])
			{
				nMin = j;
			}
		}

		// 저장한 인덱스 순번과 데이터 교환
		temp = nInput[i];
		nInput[i] = nInput[nMin];
		nInput[nMin] = temp;

		// 교환한 내용 출력
		for (int count = 0; count < 5; count++)
		{
			printf("%d  ", nInput[count]);
		}

		printf("\n\n");
	}

	return 0;
}