#include <stdio.h>
#include <stdlib.h>

int main() {

	int N;
	int* snum;
	int* score;
	char** name;

	printf("학생 수 입력: ");
	scanf_s("%d", &N);

	snum = (int*)malloc(N * sizeof(int));
	score = (int*)malloc(N * sizeof(int));

	name = (char**)malloc(N * sizeof(char*));

	for (int i = 0; i < N; i++)
	{
		name[i] = (char*)malloc(100 * sizeof(char));
	}

	for (int i = 0; i < N; i++) {
		printf("이름 입력 :");
		scanf_s("%s", name[i],100);

		printf("학번 입력: ");
		scanf_s("%d", &snum[i]);

		printf("점수 입력: ");
		scanf_s("%d", &score[i]);
	}



	//평균 구하기
	int hap = 0;

	for (int i = 0; i < N; i++)
	{
		hap += score[i];
	}

	for (int i = 0; i < N; i++)
	{
		printf("점수: %d 이름: %s 학번: %d\n",score[i],name[i],snum[i]); 
	}
	printf("평균 : %d", hap/N);

	free(snum);
	free(score);
	for (int i = 0; i < N; i++) {
	free(name[i]);
	}
	free(name);



}