#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main02() {
	int a, b;
	char c;

	printf("2개의 정수를 입력하세요 \n");
	scanf("%d %d", &a, &b);
	printf("입력하신 정수는 %d 와 %d 입니다\n", a, b);

	// fflush(stdin);	// 버퍼를 비워주기 (옛날 방식 - 표준이 아님)
	while (getchar() != '\n');	// 표준 방식

	printf("문자를 입력하세요\n");
	scanf("%c", &c);
	printf("입력하신 문자는 %c 입니다", c);

	return 0;
}