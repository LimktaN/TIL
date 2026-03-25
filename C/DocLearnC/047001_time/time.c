#include <stdio.h>

int main(void)
{
	// 사용자로부터 정수로 초(Second)를 입력 받아
	// '시:분:초' 형식으로 출력. 시, 분, 초 정보는 모두
	// 두 자리 정수로 표시하고 한 자리 숫자의 경우 앞에 0을 붙여 출력

	int num = 0;

	scanf_s("%d", &num);

	int hour = 0, minute = 0, second = 0;

	hour = num / 60 / 60;
	minute = num / 60 % 60;
	second = num % 60;

	printf("%d초는 %02d시간 %02d분 %02d초 입니다.", num, hour, minute, second);

	return 0;
}