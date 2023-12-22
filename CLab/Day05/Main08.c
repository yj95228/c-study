#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

typedef unsigned int UINT;
typedef struct person Person;

Person printPerson(Person p) {
	printf("이름 : %s, 나이 : %d, 주소 : %s\n", p.name, p.age, p.addr);
	return p;
}

int main08() {
	UINT a = 10;
	printf("%d\n", a);

	Person p = {"둘리",7,"쌍문동"};
	printPerson(p);
	Person p1 = { "또치",9,"쌍문동" };
	printPerson(p1);
	return 0;
}