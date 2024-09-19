#include <stdio.h>

int recursive(int num);

int main(void) {

	int input = 0;
	scanf_s("%d", &input);

	recursive(input);

	printf("%d", recursive(input));
}

int recursive(int num)
{
	
	if (num == 1) {
		return;
	}
	return num * recursive(num - 1);
}