#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

void fillRandom(int array[SIZE][SIZE]);
void printArray(int array[SIZE][SIZE]);
void movePointer(void* array);

int main()
{
	int array[SIZE][SIZE];

	fillRandom(array); //배열 랜덤 초기화
	printArray(array); //배열 출력
	movePointer(array); //포인터를 이용한 이동

	return 0;
}

void fillRandom(int array[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			array[i][j] = rand() % 20 + 1;
		}
	}
}

void printArray(int array[SIZE][SIZE])
{
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}

}

void movePointer(void* array) { //array를 포인터로 받음
	
	void* t; //첫 주소
	int value = 0; //안에잇는 값
	int n = 0;

	while (1) {

		t = (int*)array + n; //주소 들어감
		value= *(int*)t;

		printf("현재 위치 : (%d, %d), 배열의 값 : %d \n", n / 10, n % 10, value);

		int i = n / 10;
		int j = n % 10;

		n += value; //누적
			
		//break
		if (n >=100) 
		{
			n -= *(int*)t;
			printf("더 이상 이동할 수 없습니다. \n");
			printf("종료 위치 : (%d, %d), 배열의 값 : %d", n / 10, n % 10, value);

			break;
		}
	}
}