#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

int main08() {
	FILE* fd;
	int age = 1;
	char name[200];
	fd = fopen("a.txt", "w+");

	if (fd == NULL) {
		printf("파일이 열리지 않았습니다\n");
		return 1;
	}
	fprintf(fd, "%d %s ", 7, "둘리");
	fflush(fd);
	// SEEK_SET  파일의 시작
	// SEEK_CUR  현재 읽기/쓰기 포인터 위치
	// SEEK_END  파일의 끝
	fseek(fd, 0, SEEK_SET);
	fprintf(fd, "%d %s ", 8, "도우너");
	fflush(fd);
	fclose(fd);
	return 1;
}