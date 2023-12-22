#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"
#include "student.h"

// 구조체의 동적 메모리 생성
int main15() {
	Person* p = (Person*)malloc(sizeof(Person));
	strcpy(p->name, "둘리");
	p->age = 7;
	strcpy(p->addr, "쌍문동");
	printf("%s %d %s \n", p->name, p->age, p->addr);
	free(p);

	Student* s = (Student*)malloc(sizeof(Student));
	s->addr = (char*)malloc(strlen("쌍문동"));
	strcpy(s->name, "또치");
	s->age = 8;
	strcpy(s->addr, "쌍문동");
	printf("%s %d %s \n", s->name, s->age, s->addr);
	free(s->addr);
	free(s);
	return 0;
}