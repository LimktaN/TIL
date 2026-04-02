#include <stdio.h>

int main(void)
{
	// 사용자로부터 입력받은 정수 중 가장 큰 수를 출력하는 프로그램 작성
	// 정수는 부호가 있는 32비트 정수로 한정하며 scanf_s() 함수로 한번에 세 값을 모두 입력받음.
	// 최댓값은 printf() 함수로 출력

	int inputA = 0, inputB = 0, inputC = 0, max = 0;

	scanf_s("%d%d%d", &inputA, &inputB, &inputC);

	max = (inputA > inputB) ?
		(inputA > inputC) ? inputA : inputC :
		(inputB > inputC) ? inputB : inputC;

	printf("MAX: %d", max);

	return 0;
}