#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

// 구조체 함수 인자로 넘기기
void printPerson1(Person p) {
	printf("이름 : %s, 나이 : %d, 주소 : %s\n", p.name, p.age, p.addr);
	p.age++;
	printf("이름 : %s, 나이 : %d, 주소 : %s\n", p.name, p.age, p.addr);
}

void printPerson2(Person ps[]) {
	printf("이름 : %s, 나이 : %d, 주소 : %s\n", ps[0].name, ps[0].age, ps[0].addr);
	ps[0].age++;
	printf("이름 : %s, 나이 : %d, 주소 : %s\n", ps[0].name, ps[0].age, ps[0].addr);
}

int main11() {
	Person p = { "둘리",7,"쌍문동" };
	printPerson1(p);
	printf("main : 이름 : %s, 나이 : %d, 주소 : %s\n", p.name, p.age, p.addr);

	Person p2 = p;
	printf("p2 : 이름 : %s, 나이 : %d, 주소 : %s\n", p.name, p.age, p.addr);
	Person ps[3] = { {"둘리",7,"쌍문동"}, {"도치",8,"쌍문동"} , {"도우너",9,"쌍문동"} };
	printPerson2(ps);
	printf("main : 이름 : %s, 나이 : %d, 주소 : %s\n", ps[0].name, ps[0].age, ps[0].addr);
	return 0;
}