#include <stdio.h>

void swap(a, b);

int main() {

	int a = 10;
	int b = 20;
	printf("a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d, b = %d", a, b);

}

static void swap(int *a, int *b)
{
	int temp = 0;
	a = temp;
	b = a;
	temp = b;
}