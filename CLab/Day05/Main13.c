#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

void printPerson3(Person a, Person* p) {
	a.age++;
	printf("%s %s %s %d %d %s\n", a.name, (*p).name, p->name, a.age, p->age, p->addr);
	p->age++;
	printf("%s %s %s %d %d %s\n", a.name, (*p).name, p->name, a.age, p->age, p->addr);
}

int main13() {
	Person a = {"µÑ¸®",7,"½Ö¹®µ¿"};

	Person* p;
	printf("%d\n", sizeof(p));
	p = &a;
	printf("%u %u\n", &a, p);
	printf("%s %s %s %d %d %s\n", a.name, (*p).name, p->name, a.age, p->age, p->addr);

	printPerson3(a, &a);

	printf("%s %s %s %d %d %s\n", a.name, (*p).name, p->name, a.age, p->age, p->addr);
	return 0;
}