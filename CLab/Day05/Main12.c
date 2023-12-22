#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

// 구조체 안에 구조체
typedef struct {
	char name[20 + 1];
	int age;
	char* addr;
} Profile;
typedef struct {
	Profile f;
	int grade;
} SCSA;

int main12() {
	SCSA s;
	strcpy(s.f.name, "마이콜");
	s.f.age = 20;
	s.f.addr = (char*)malloc(sizeof("쌍문동") + 1);
	strcpy(s.f.addr, "쌍문동");
	s.grade = 21;
	printf("%s %s %s %d\n", s.f.name, s.f.age, s.f.addr, s.grade);
	return 0;
}