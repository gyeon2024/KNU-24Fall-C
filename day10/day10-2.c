#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Customer {
	char* customerName;
	int enumrank;
	int order_amount;
	int point;
	struct Customer* prev, next;
};

struct NODE {
	struct Customer data;

};
