#include <stdio.h>
#include <string.h>
#include "mylib.h"

int index = 0;

int main() {
	char name[10][50];
	int price[10];
	int menu;
	int (*fp)(char(*name)[50], int* price);

	while (1) {
		printf("1: ���, 2: ������˻�, 3: �Է�, 4: ����, 5: ����, 0: ����\n");
		scanf("%d", &menu);
		switch (menu){
		case 1:
			funcPoint(printBook, name, price);
			break;
		case 2:
			funcPoint(findBook, name, price);
			break;
		case 3:
			funcPoint(insertBook, name, price);
			break;
		case 4:
			funcPoint(updateBook, name, price);
			break;
		case 5:
			funcPoint(deleteBook, name, price);
			break;
		case 0:
			exit(0);
			break;
		}
	}
	return 0;
}