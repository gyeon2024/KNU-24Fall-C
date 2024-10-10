#include <stdio.h>

int main()
{
	int Num = 5;

	for (int i = 1; i <= Num; i++) {

		for (int j = 0; j < Num - i; j++)
		{
			printf(" ");
		}

		for (int k = 0; k < i * 2 - 1; k++)
		{
			printf("*");
		}

		printf("\n");
	}
}