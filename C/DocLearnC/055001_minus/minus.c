#include <stdio.h>

int main(void)
{
	// 사용자로부터 두 정수를 입력 받아 뺄셈을 수행하고
	// 결과를 출력하는 프로그램을 작성
	// 단, 절대로 뺄셈 연산자를 사용하지 말고 비트 연산자를 이용해 구현.

	int input1 = 0, input2 = 0;

	scanf_s("%d%d", &input1, &input2);

	// input1 += ~input2 + 1;

	input1 += (input2 ^ 0xFFFFFFFF) + 1;

	printf("%d", input1);
}