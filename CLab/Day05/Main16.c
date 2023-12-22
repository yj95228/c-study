#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "my.h"

void printSCSA(SCSA21** s, int size) {
	for (int i = 0; i < size; ++i) {
		printf("Name: %s\n", s[i]->f.name);
		printf("Age: %d\n", s[i]->f.age);
		printf("Address: %s\n", s[i]->f.addr);
		printf("Grade: %d\n", s[i]->grade);
		printf("\n");
	}
}

// 동적선언방식으로 메모리를 할당하고 값을 입력받아 출력
int main16() {
	SCSA21* sa[3];
	int size = sizeof(sa) / sizeof(SCSA21);

	char tmp[200];
	for (int i = 0; i < size; ++i) {
		sa[i] = (SCSA21*)malloc(sizeof(SCSA21));

		printf("Enter name: ");
		scanf("%s", sa[i]->f.name);
		printf("Enter age: ");
		scanf("%d", &sa[i]->f.age);
		printf("Enter address: ");
		sa[i]->f.addr = (char*)malloc(50);
		scanf("%s", sa[i]->f.addr);
		sa[i]->grade = 21;
	}

	printSCSA(sa, size);

	for (int i = 0; i < size; ++i) {
		free(sa[i]->f.addr);
		free(sa[i]);
	}

	return 0;
}