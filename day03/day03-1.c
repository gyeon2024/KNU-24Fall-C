#include <stdio.h>

int is_prime(int num);

int main(void)
{
	int num = 0;
	printf("숫자 입력 : ");
	scanf_s("%d", &num);

	is_prime(num);

	if (is_prime(num) == 1)
	{
		printf("소수임");
	}
	else printf("소수 아님");
}

int is_prime(int a) {

	int count = 0; 

	for (int i = 2; i < a; i++)
	{
		if (a % i == 0) count + 1;
		else return;
	}

	return count;
	
}