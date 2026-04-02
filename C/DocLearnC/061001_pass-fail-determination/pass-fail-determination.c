#include <stdio.h>

int main(void)
{
	// 사용자로부터 점수(0~100)를 입력 받아
	// 80점 이상이면 '합격', 그렇지 않으면 '불합격'
	// 이라고 출력하는 프로그램을 작성.
	// 단, 3항 연산자를 사용

	int score = 0;

	printf("점수를 입력하세요: ");
	scanf_s("%d", &score);

	printf("결과: ");

	score >= 80 ? printf("합격\n") : printf("불합격\n");

	printf("결과: %s", (score >= 80) ? "합격" : "불합격"); // 이렇게 합쳐도 됨

	return 0;
}