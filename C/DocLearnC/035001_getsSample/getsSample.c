#include <stdio.h>

int main(void)
{
	char szName[32] = {0};
	
	printf("이름을 입력하세요. \n");
	gets(szName); // gets 함수는 버퍼 오버플로우 취약점이 존재하므로 사용하지 않는 것이 좋습니다.

	printf("입력한 문자열은 ");
	puts(szName); //puts 함수는 문자열을 출력한 후 자동으로 줄 바꿈을 추가합니다.
	puts("입니다.");

	return 0;
}