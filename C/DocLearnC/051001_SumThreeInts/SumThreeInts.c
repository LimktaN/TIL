#include <stdio.h>

int main(void)
{
	// 사용자로부터 세 정수를 입력 받아 총합을 출력.
	// 사용자 입력이 저장되는 변수 하나와 값을 누적하는 변수
	// 하나만 사용해서 구현

	int input = 0, total = 0; // 초기화 필수
	// 초기화하지 않는 경우, 쓰레기 값이 존재해서 원하는 값이 안나올 수 있음
	// 그 전에 실행할때 에러 발생함

	scanf_s("%d", &input);
	total += input;

	scanf_s("%d", &input);
	total += input;

	scanf_s("%d", &input);
	total += input;

	printf("Total: %d", total);

	return 0;
}