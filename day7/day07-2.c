#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {

	double x = 0;
	double y = 0;

	int count= 0, circle = 0;
	

	srand(time(NULL));

	//난수 생성
	
	
for (int i = 0; i < 1000000000; i++) {

	x = (double)rand() / (double)RAND_MAX;
	y = (double)rand() / (double)RAND_MAX;
	count++;
	double pytha = (x * x) + (y * y);
	
	
	if (sqrt(pytha) < 1)
	{
		circle++;
	}

	if (i % 10000000 == 0)
	{
		int p = i / 10000000; 
		printf("진행률 %d%% , 원주율 : %f ", p, ((circle)*4.0/count) ); 
		int bar = 20;
		for(int i=0;  i< p / 5 ; i++)
		{
			printf("■");
		}

		for (int k=0; k<20 - p / 5; k++)
		{
			printf("□");
		}
		
		
		printf("\n");
		
	}
}



	

}