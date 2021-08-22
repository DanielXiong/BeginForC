#include <stdio.h>

int main()
{
	int sum = 0;
	for (int i = 1; i <= 1000; i++) {
		sum += i;
	}

	printf("total : %8d", sum);

	return 0;
}