#include <stdio.h>

int main06() {
	// ascii code
	for (int i = 0; i < 254; i++) {
		printf("%d : %c\n", i, i);
	};

	printf("문자를 입력하세요\n");
	char c;
	c = getchar();
	printf("입력하신 문자는 ");
	putchar(c);
	printf("입니다\n");

	puts("문자열을 입력하세요\n");
	char str[10];
	gets(str);
	puts("입력하신 문자열는 ");
	puts(str);
	printf("입니다\n");
	return 0;
}