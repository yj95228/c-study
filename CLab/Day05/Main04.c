#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 동적 메모리의 재할당을 이용한 문자열 처리
int main04() {
	char tmp[30 + 1];
	// 포인터 배열
	char* str[3];
	for (int i = 0; i < 3; i++) {
		printf("문자열을 입력하세요\n");
		gets(tmp);
		str[i] = (char*) malloc(strlen(tmp) + 1);
		strcpy(str[i], tmp);
	}

	for (int i = 0; i < 3; i++) {
		printf("%s\n", str[i]);
	}
	// free(str); -> 이렇게 하면 메모리 해제 안됨
	for (int i = 0; i < 3; i++) {
		free(str[i]);
	}
	return 0;
}