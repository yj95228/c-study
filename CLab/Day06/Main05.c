#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main05() {
	FILE* fd;
	fd = fopen("test.txt", "r");
	if (fd == NULL) {
		printf("파일이 열리지 않았습니다\n");
		return 1;
	}
	char str[50];
	fscanf(fd, "%s", str);
	printf("파일로부터 읽은 문자열: %s", str);
	return 0;
}