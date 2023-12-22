#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"
#pragma pack(1)

int main07() {
	int a;
	struct person p;
	strcpy(p.name, "둘리");
	p.age = 7;
	strcpy(p.addr, "쌍문동");
	printf("이름 : %s, 나이 : %d, 주소 : %s\n", p.name, p.age, p.addr);

	struct person p2;
	strcpy(p2.name, "또치");
	p2.age = 9;
	strcpy(p2.addr, "쌍문동");
	printf("이름 : %s, 나이 : %d, 주소 : %s\n", p2.name, p2.age, p2.addr);

	printf("strcut person size = %d\n", sizeof(struct person));
	return 0;
}