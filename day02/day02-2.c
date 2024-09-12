#include <stdio.h>

int main() {

		int num = 0;
	double x = 0;
	double y = 0;
	double result = 0;
	
		printf("원하는 기능을 입력하시오. \n");
	printf("1. 더하기 2. 빼기 3. 곱하기 4. 나누기 \n");
	printf("기능 : ");
	
		scanf_s("%d", &num);
	printf("숫자 1을 입력하세요 : ");
	scanf_s("%lf", &x);
	printf("숫자 2를 입력하세요 : ");
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