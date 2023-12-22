#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

// 구조체 포인트 배열의 함수 인자 전달
void printPerson4(Person** ps, int size) {
	for (int i = 0; i < size; i++) {
		printf("%s %d %s\n", (*ps[i]).name, ps[i]->age, (*(ps + i))->addr);
	}
}

// 구조체 포인트 배열
int main14() {
	Person p1 = {"둘리",7,"쌍문동"};
	Person p2 = {"도치",8,"쌍문동"};
	Person p3 = {"도우너",9,"쌍문동"};

	Person* ps[3];
	ps[0] = &p1;
	ps[1] = &p2;
	ps[2] = &p3;

	for (int i = 0; i < 3; i++) {
		printf("%s %d %s\n", (*ps[i]).name, ps[i]->age, (*(ps+i))->addr);
	}
	int size = sizeof(ps) / sizeof(Person*);
	printPerson4(ps, 3);
	return 0;
}