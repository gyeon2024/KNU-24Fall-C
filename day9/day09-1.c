#include <stdio.h>
#include <stdbool.h>

struct Vector {
	int x;
	int y;
	int z;
};

int select();
void printVector();

struct Vector inputVector();
struct Vector hap();
struct Vector cha();
int dot();
struct Vector cross();

int main() {

	struct Vector v1, v2, result;
	int dotResult = 0;
	int num = 0;
	bool is_end = true;

	printf("첫번째 벡터(x,y,z) : ");
	v1 = inputVector();

	printf("두번째 벡터(x,y,z) : ");
	v2 = inputVector();
	

	while (is_end)
	{

		num = select();


		switch (num)
		{
		case 1: result = hap(v1, v2);
			printf("벡터의 합은 ");
			printVector(result);
			break;

		case 2: result = cha(v1, v2);
			printf("벡터의 차는 ");
			printVector(result);
			break;

		case 3: result = cross(v1, v2);
			printf("벡터의 외적은 ");
			printVector(result);
			break;

		case 4: dotResult = dot(v1, v2);
			printf("벡터의 내적은 vec 1 * vec 2 = %d \n", dotResult);
			break;

		case 5: printf("종료"); is_end = false; break;

		default:
			printf("범위 내에서 입력하세요");
			break;
		}
	}
}

struct Vector inputVector() { //입력
	struct Vector vector;
	scanf_s("%d %d %d", &vector.x, &vector.y, &vector.z);
	return vector;
}

int select() {
	int num = 0;

	printf("------------ \n");
	printf("1. 벡터의 합 \n");
	printf("2. 벡터의 차 \n");
	printf("3. 벡터의 외적 \n");
	printf("4. 벡터의 내적 \n");
	printf("5. 종료 \n");
	printf("------------ \n");
	printf("명령 입력 : ");
	
	scanf_s("%d", &num);

	return num;
}

void printVector(struct Vector result){
	printf("x : %d , y : %d , z : %d \n", result.x, result.y, result.z);
}

struct Vector hap(struct Vector v1, struct Vector v2) {
	struct Vector result;
	result.x = v1.x + v2.x;
	result.y = v1.y + v2.y;
	result.z = v1.z + v2.z;
	return result;
}

struct Vector cha(struct Vector v1, struct Vector v2) {
	struct Vector result;
	result.x = v1.x - v2.x;
	result.y = v1.y - v2.y;
	result.z = v1.z - v2.z;
	return result;
}

int dot(struct Vector v1, struct Vector v2) {

	struct Vector m;
	int result = 0;

	m.x = v1.x * v2.x;
	m.y = v1.y * v2.y;
	m.z = v1.z * v2.z;

	result = m.x + m.y + m.z;
	return result;
}

struct Vector cross(struct Vector v1, struct Vector v2) {
	struct Vector result;
	result.x = v1.y * v2.x - v1.z * v2.y;
	result.y = v1.z * v2.x - v1.x * v2.z;
	result.z = v1.x * v2.y - v1.y * v2.x;
	return result;
}