#include <stdio.h>
#include <stdlib.h>

struct Student {
	int snum;
	char name[100];
	int score;
};

int main()
{
	int N = 0;

	scanf_s("%d", &N);

	struct Student *p; //동적할당을 위해 포인터

	p = (struct Student*)malloc(N * sizeof(struct Student));

	for (int i = 0; i < N; i++)
	{
		printf("학번: ");
		scanf_s("%d", &p[i].snum);
		printf("이름: ");
		scanf_s("%s", p[i].name, 100);
		printf("점수: ");
		scanf_s("%d", &p[i].score);
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d %s %d", p[i].score, p[i].name, p[i].snum);
	}

	free(p);

}