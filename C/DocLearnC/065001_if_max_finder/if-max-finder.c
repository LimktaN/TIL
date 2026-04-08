#include <stdio.h>

int main(void)
{
	// 사용자로부터 입력받은 정수 중 가장 큰 수를 출력하는 프로그램 작성
	// 정수는 부호가 있는 32비트 정수로 한정
	// scanf_s() 함수로 한번에 한 값만 입력받고
	// 내부적으로 최댓값을 계속 갱신하는 구조로 작성.
	// 반드시 if문 사용
	
	int input = 0, max = 0;

	scanf_s("%d", &input);
	if (input > max)
		max = input;

	scanf_s("%d", &input);
	if (input > max)
		max = input; 

	scanf_s("%d", &input);
	if (input > max)
		max = input;

	printf("MAX: %d\n", max);

	return 0;
}