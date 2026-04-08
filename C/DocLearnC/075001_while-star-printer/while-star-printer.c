#include <stdio.h>

int main(void)
{
	// 사용자로부터 1~9 범위 정수를 입력받아
	// 그 수만큼 '*'를 출력하는 프로그램 작성
	// 사용자 입력이 범위를 넘어서면 강제로 보정
	// *는 한 행에 이어서 출력하고 전체 출력이 끝나면 개행

	int nInput = 0, count = 0;

	while (count == 0)
	{
		printf("1~9 범위의 정수를 입력해주세요: ");
		scanf_s("%d", &nInput);

		if (nInput > 0 && nInput < 10)
		{
			while (nInput > count)
			{
				//putchar('*');
				printf("* ");
				count++;
			}
			count = 0;
			printf("\n");
		}
		else
		{
			printf("정수를 다시 입력해주세요.\n");
		}
	}	

	return 0;
}