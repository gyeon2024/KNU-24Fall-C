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

	struct Student *p; //�����Ҵ��� ���� ������

	p = (struct Student*)malloc(N * sizeof(struct Student));

	for (int i = 0; i < N; i++)
	{
		printf("�й�: ");
		scanf_s("%d", &p[i].snum);
		printf("�̸�: ");
		scanf_s("%s", p[i].name, 100);
		printf("����: ");
		scanf_s("%d", &p[i].score);
	}

	for (int i = 0; i < N; i++)
	{
		printf("%d %s %d", p[i].score, p[i].name, p[i].snum);
	}

	free(p);

}