#include <stdio.h>
#include <string.h>

void reverse(char* array)
{
	char temp = 0; //문자를 담고있는 주소를 가리키면 char형
	int len = strlen(array) - 1;
	char* start = array;
	char* last = array + len;

	while (start < last)
	{

		temp = *start; // array 첫주소 + 1 주소에 별붙이면 값
		*start = *last; // 첫주소 자리에 마지막 주소
		*last = temp;

		start++; //주소임
		last--;
	}
}
int main()
{
	char array[100];
	

	printf("문자열 입력: ");
	scanf_s("%s", array, sizeof(array));

	reverse(array);

	

	printf("%s", array);
	return 0;
}	
