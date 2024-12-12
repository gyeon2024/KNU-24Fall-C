#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
	char name[50];
	int score;
};

struct NODE {
	struct Student data;
	struct NODE* link;
};

struct NODE* create_node(char name, int score)
{
	struct NODE* new_node = (struct NODE*)malloc(sizeof(struct NODE));
	new_node->data.name = name;
	new_node->data.score = score;
	new_node->link = NULL;

	return new_node;
}

struct NODE* head = NULL;



void print_node()
{
	struct NODE* cur = head->link;
	while (cur != NULL)
	{
		printf("%s :", cur->data.name);
		printf("%d \n", cur->data.score);
		cur = cur->link;
	}
}

int delete_node(char name)
{
	struct NODE* prev = head;
	struct NODE* cur = head->link;
	while (cur != NULL)
	{
		if (cur->data.name == name)
		{
			prev->link = cur->link;
			free(cur);
			return 1;
		}

		prev = cur;
		cur = cur->link;
	}
	return 0;
}

void sort_node(struct NODE* new_node)
{



	}


void main()
{
	int choice = 0;
	char name[50] = 0;
	int score = 0;

	struct NODE* new_node;

	while (1)
	{
		printf("---------------------\n");
		printf("1. 학생 성적을 입력\n");
		printf("2. 학생 정보 제거\n");
		printf("3. 프로그램 종료\n");
		printf("input: ");
		scanf_s("%d", &choice);

		switch (choice)
		{
		case 1:
			printf("학생 이름:");
			scanf_s("%s", name);
			printf("%s의 성적 : ", name);
			scanf_s("%d", score);
			new_node = create_node(name, score);
			sort_node(new_node);
			print_node();
			break;

		case 2:
			printf("삭제할 학생 이름: ");
			scanf_s("%s", name);
			delete_node(name);
			print_node();
			break;

		case 3:
			printf("종료.\n");
			return 0;

		default:
			printf("잘못된 선택입니다\n");

		}
	}
}