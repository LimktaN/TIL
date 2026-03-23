#include <stdio.h>

int main(void)
{
	double dDate = 123.456;
	printf("%f, %f\n", dDate, -123.456);

	//소수점 2번째 자리에서 반올림하고 1자리까지 출력
	printf("%.1f\n", dDate);
	//소수점 3번째 자리에서 반올림하고 2자리까지 출력
	printf("%.2f\n", dDate);
	//소수점 4번째 자리에서 반올림하고 3자리까지 출력
	printf("%.3f\n", dDate);

	// 8자리까지 출력하는데 빈칸은 공백으로 채운다.
	printf("%8d\n", 123);

	// 소수점을 포함해 12자리까지 출력하는데,
	// 소수점은 반올림하여 3자리까지 출력한다.
	printf("%12.3f\n", dDate);
	printf("%012.3f\n", dDate);

	return 0;
}