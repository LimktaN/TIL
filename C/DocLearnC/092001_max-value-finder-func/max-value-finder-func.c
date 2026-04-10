#include <stdio.h>

int InputNumber(void);
int MaxFinder(int, int, int);

// 메인 함수
int main(void)
{
	int num1 = 0, num2 = 0, num3 = 0;

	num1 = InputNumber();
	num2 = InputNumber();
	num3 = InputNumber();

	printf("\n입력한 정수 중 최댓값은 %d 입니다.\n", MaxFinder(num1, num2, num3));

	return 0;
}

// 숫자 입력
InputNumber()
{
	int num = 0;

	printf("최댓값을 찾을 1~100 사이의 정수를 입력해주세요: ");
	scanf_s("%d*c", &num);

	return num;
}

// 최댓값 찾기
MaxFinder(int num1, int num2, int num3)
{
	int max = 0;

	max = (num1 > num2) ?
		(num1 > num3) ? num1 : num3 :
		(num2 > num3) ? num2 : num3;

	return max;
}