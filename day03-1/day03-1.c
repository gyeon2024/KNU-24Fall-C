#include <stdio.h>

int is_prime(int num);

int main(void)
{
	int num = 0;
	printf("���� �Է� : ");
	scanf_s("%d", &num);

	is_prime(num);

	if (is_prime(num) == 1)
	{
		printf("�Ҽ���");
	}
	else printf("�Ҽ� �ƴ�");
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