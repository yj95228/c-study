#include <stdio.h>

int main04() {
	char name[3][5 + 1] = { "lee","kim","park" };
	char* name1 = "lee";
	char* name2 = "kim";
	char* name3 = "park";

	// 포인터 배열
	char* names[3];
	names[0] = name1;
	names[1] = name2;
	names[2] = name3;

	printf("%s %s %s\n", *names, *(names+1), *(names+2));
	printf("%c %c %c\n", *names, *(names+1), *(names+2));
	printf("%c %c\n", *(*names), *((*names)+1));
	printf("%c %c\n", names[0][0], names[0][1]);
	printf("%c %c\n", **(names+1), **(names+2));
}