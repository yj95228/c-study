#include <stdio.h>
#include <string.h>
#include "myfunction.h"

int index = 0;
void printBook(char name[10][50], int price[10]) {
	for (int i = 0; i < index; i++) {
		printf("[%d] %s %d\n", i, name[i], price[i]);
	}
};
void insertBook(char name[10][50], int price[10]) {
	printf("�������� �Է��ϼ���\n");
	scanf("%s", name[index]);
	
	printf("������ �Է��ϼ���\n");
	scanf("%d", &price[index]);
	index++;
};
void updateBook(char name[10][50], int price[10]) {
	int search;
	printf("������ �ε����� �������ּ���\n");
	scanf("%d", &search);
	if (search <= index) {
		printf("������ �������� �Է����ּ���\n");
		scanf("%s", name[search]);
	} else {
		printf("�ε����� �ʹ� Ů�ϴ�\n");
	}
};
void deleteBook(char name[10][50], int price[10]) {
	int search;
	printf("������ �ε����� �������ּ���\n");
	scanf("%d", &search);
	if (search <= index) {
		strcpy(name[search], name[index - 1]);
		price[search] = price[index - 1];
		index--;
	}
	else {
		printf("�ε����� �ʹ� Ů�ϴ�\n");
	}
};
void findBook(char name[10][50], int price[10]) {
	char keyword[50];
	printf("�������� �Է����ּ���\n");
	scanf("%s", keyword);
	for (int i = 0; i < index; i++) {
		if (!strcmp(name[i], keyword)) {
			printf("[%d] %s %d", i, name[i], price[i]);
		}
	}
};
int main() {
	char name[10][50];
	int price[10];
	int menu;
	while (1) {
		printf("1: ���, 2: ������˻�, 3: �Է�, 4: ����, 5: ����, 0: ����\n");
		scanf("%d", &menu);
		switch (menu){
		case 1:
			printBook(name, price);
			break;
		case 2:
			findBook(name, price);
			break;
		case 3:
			insertBook(name, price);
			break;
		case 4:
			updateBook(name, price);
			break;
		case 5:
			deleteBook(name, price);
			break;
		case 0:
			exit(0);
			break;
		}
	}
	return 0;
}