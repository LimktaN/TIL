#include <stdio.h>

int main(void)
{
	int nInput = 0, count = 1;

	for (scanf_s("%d", &nInput); count < 10; count++)
	{
		printf("%d X %d = %d\n", nInput, count, nInput * count);
	}

	return 0;
}