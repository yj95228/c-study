#include <stdio.h>
#include <stdlib.h>

void change(int a, int b);
void change2(int *a, int *b);

int main02() {
	int a = 10, b = 5;
	change(a, b);
	printf("main: a=%d, b=%d\n", a, b);
	// printf("main: a=%u, b=%u\n", &a, &b);
	change2(&a, &b);
	printf("main: a=%d, b=%d\n", a, b);
	return 0;
}

void change(int a, int b) {
	a++;
	b--;
	printf("change: a=%d, b=%d\n", a, b);
	// printf("change: a=%u, b=%u\n", &a, &b);
}

void change2(int *a, int *b) {
	(*a)++;
	(*b)--;
	printf("change2: a=%d, b=%d\n", *a, *b);
	// printf("change: a=%u, b=%u\n", &a, &b);
}