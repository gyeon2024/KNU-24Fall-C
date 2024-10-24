#include <stdio.h>

struct Product
{
	int ID;
	char name[100];
	int price;
};

struct Product printProduct();


int main() {
	struct Product product[5];
	int count = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("상품 정보를 입력하세요. (입력 중단은 ID에 0입력)\n");

		printf("상품 ID: ");
		scanf_s("%d", &product[i].ID);

		if (product[i].ID == 0) break;

		printf("상품명: ");
		scanf_s("%s", product[i].name, sizeof(product[i].name));

		printf("상품 가격: ");
		scanf_s("%d", &product[i].price);

		printf("\n");

		count++;
		
	}
	printf("\n <<입력된 상품 목록>>");

	for (int j = 0; j < count; j++)
	{
		printProduct(product[j]);
	}
}



struct Product printProduct(struct Product product)
{
	struct Product print = product;
	printf("\n");
	printf("상품 ID: %d \n", print.ID);
	printf("상품명 %s \n", print.name);
	printf("상품 가격 : %d \n", print.price);
}
