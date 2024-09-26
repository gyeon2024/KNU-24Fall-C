#include <stdio.h>

void swap(a, b);

int main() {

	int a = 10;
	int b = 20;
	printf("a = %d, b = %d\n", a, b);

	swap(&a, &b);

	printf("a = %d, b = %d", a, b);

}

static void swap(int *pa, int *pb)
{
	int temp = *pa;
	*pa = *pb;
	*pb = temp;
}