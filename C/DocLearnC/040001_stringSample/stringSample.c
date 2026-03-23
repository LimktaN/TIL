#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 문자열을 저장할 배열 선언
	char szBuffer[32] = { 0 };

	// 사용자가 입력한 문자열을 배열에 저장 후 출력
	scanf_s("%s", szBuffer, (unsigned)_countof(szBuffer));
	printf("%s\n", szBuffer);


	// 이번엔 두 개의 문자열을 입력받아 출력
	char szBufferLeft[32] = { 0 };
	char szBufferRight[32] = { 0 };

	scanf_s("%s%s", szBufferLeft, (unsigned)_countof(szBufferLeft), szBufferRight,
		(unsigned)_countof(szBufferRight));
	printf("%s %s \n", szBufferLeft, szBufferRight);

	return 0;
}