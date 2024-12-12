#include <stdio.h>
#include <math.h>

double f(double x)
{
	return ( - log10(1 / x)) + sin(x);
}

int main() {

	double a, b;
	int n = 0;

	printf("적분할 시작 값을 입력하세요 : ");
	scanf_s("%lf", &a);

	printf("적분할 끝 값을 입력하세요 : ");
	scanf_s("%lf", &b);

	printf("시행할 최대 구간을 입력하세요 (2^n) n : ");
	scanf_s("%d", &n);

	printf("%lf", a);

	long long iter = (long long)pow(2, n);
	for (long long i = 1; i <= iter; i *= 2)
	{
		double width = (b - a) / (double)i;
		double sum = 0.0;

		for (int j = 0; j < i; j++)
		{
			sum += f(a + j * width)*width;
		}

		printf("\t구간 %10d", i);
		printf("적분결과 : %f \n", sum);
	}
	

}