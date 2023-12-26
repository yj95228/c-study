#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main03() {
	FILE* fdr;
	fdr = fopen("test.txt", "r");
	if (fdr == NULL) {
		printf("파일이 읽기 모드로 열리지 않았습니다\n");
	}
	else {
		printf("파일이 읽기 모드로 열렸습니다\n");
		fclose(fdr);
	}

	FILE* fdw;
	fdw = fopen("test.txt", "w");
	if (fdw == NULL) {
		printf("파일이 쓰기 모드로 열리지 않았습니다\n");
	}
	else {
		printf("파일이 쓰기 모드로 열렸습니다\n");
		fclose(fdw);
	}
	return 0;
}