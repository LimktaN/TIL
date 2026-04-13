#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	// 메모리 복사 코드에서 잘못된 부분을 수정하시오.

	/*
	코드 원본
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	pszData = szBuffer;
	puts(pszData);

	return 0;
	*/
	char szBuffer[12] = { "HelloWorld" };
	char* pszData = NULL;

	pszData = (char*)malloc(sizeof(char) * 12);
	// 단순 대입이 아닌 복사 함수 사용
	memcpy(pszData, szBuffer, 12);
	puts(pszData);

	// malloc 사용 후 메모리 반납 필요
	free(pszData);

	return 0;
}