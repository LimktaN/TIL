#include <stdio.h>

int main(void)
{
	// 두 변수의 값을 교환하는 코드를 작성.
	// 사용자로부터 두 정수를 입력받아 각각을 int형 변수 a, b에 저장하고,
	// 임시변수 tmp를 활용해 a, b의 값을 교환한 후 출력

	int a = 0, b = 0, tmp = 0;

	scanf_s("%d%d", &a, &b);

	tmp = a;
	a = b;
	b = tmp;

	printf("a: %d, b: %d\n", a, b);

	return 0;
}