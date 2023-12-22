#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "student.h"

int main09() {
	// 구조체의 정적 선언 방식
	Student s1 = { "둘리",7,"쌍문동" };
	strcpy(s1.name, "또치");
	s1.age = 9;
	s1.addr = (char*)malloc(strlen("쌍문동") + 1);
	strcpy(s1.addr, "쌍문동");
	printf("이름 : %s, 나이 : %d, 주소 : %s\n", s1.name, s1.age, s1.addr);
	free(s1.addr);
	return 0;
}