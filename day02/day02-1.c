#include <stdio.h>

int main() {

		int num = 0;
	double x = 0;
	double y = 0;
	double result = 0;
	
		printf("���ϴ� ����� �Է��Ͻÿ�. \n");
	printf("1. ���ϱ� 2. ���� 3. ���ϱ� 4. ������ \n");
	printf("��� : ");
	
		scanf_s("%d", &num);
	printf("���� 1�� �Է��ϼ��� : ");
	scanf_s("%lf", &x);
	printf("���� 2�� �Է��ϼ��� : ");
	scanf_s("%lf", &y);

		
		if (num == 1)
		{
		result = x + y;
		printf(" %lf + %lf = %lf", x, y, result);
		}
	else if (num == 2)
	{
			result = x - y;
			printf(" %lf - %lf = %lf", x, y, result);
	}
	else if (num == 3)
	{
			result = x * y;
			printf(" %lf * %lf = %lf", x, y, result);
	}
	else if (num == 4)
		{
			result = x / y;
			printf(" %lf / %lf = %lf", x, y, result);
		}
	
	
	
	
}