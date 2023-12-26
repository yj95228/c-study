#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

int main08() {
	FILE* fd;
	fd = fopen("person.txt", "r");
	if (fd == NULL) {
		printf("파일이 열리지 않았습니다\n");
		return 1;
	}
	Person p = { 0 };
	while (fscanf(fd, "%s %s %s %d", p.title, p.author, p.publisher, &p.price) != EOF) {
		printf("%s %s %s %d\n", p.title, p.author, p.publisher, p.price);
	}
	fclose(fd);
	return 0;
}