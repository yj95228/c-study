#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// char** : 문자열 포인터 배열
int main06(int argc, char** argv) {
	for (int i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
}