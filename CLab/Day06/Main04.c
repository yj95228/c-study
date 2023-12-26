#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main04() {
	FILE* fdw;
	fdw = fopen("test.txt", "w");
	if (fdw == NULL) {
		printf("파일이 쓰기 모드로 열리지 않았습니다\n");
		return 1;
	}
	fprintf(fdw, "%s", "잘쓰여지나요");
	printf("쓰기가 완료되었습니다\n");
	fflush(fdw);
	fclose(fdw);
	return 0;
}