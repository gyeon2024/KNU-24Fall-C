#include <stdio.h>
#include <stdlib.h>

int main() {

	int N;
	int* snum;
	int* score;
	char** name;

	printf("�л� �� �Է�: ");
	scanf_s("%d", &N);

	snum = (int*)malloc(N * sizeof(int));
	score = (int*)malloc(N * sizeof(int));

	name = (char**)malloc(N * sizeof(char*));

	for (int i = 0; i < N; i++)
	{
		name[i] = (char*)malloc(100 * sizeof(char));
	}

	for (int i = 0; i < N; i++) {
		printf("�̸� �Է� :");
		scanf_s("%s", name[i],100);

		printf("�й� �Է�: ");
		scanf_s("%d", &snum[i]);

		printf("���� �Է�: ");
		scanf_s("%d", &score[i]);
	}



	//��� ���ϱ�
	int hap = 0;

	for (int i = 0; i < N; i++)
	{
		hap += score[i];
	}

	for (int i = 0; i < N; i++)
	{
		printf("����: %d �̸�: %s �й�: %d\n",score[i],name[i],snum[i]); 
	}
	printf("��� : %d", hap/N);

	free(snum);
	free(score);
	for (int i = 0; i < N; i++) {
	free(name[i]);
	}
	free(name);



}