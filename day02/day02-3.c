#include <stdio.h>

int main() {
	
	for (int i = 0; i <= 99; i++)
	{
		if (i % 3 == 0 && i % 4 == 0)
		{
			printf("%d ", i);
		}
		else if (i % 7 == 0)
		{
			printf("%d ", i);
		}
	}
}