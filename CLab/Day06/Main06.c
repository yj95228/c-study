#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "person.h"

int main06() {
	Person p = { "cpp","�Ѹ�","scsa",1000 };

	FILE* fd;
	fd = fopen("person.txt", "w");
	if (fd == NULL) {
		printf("������ ������ �ʾҽ��ϴ�\n");
		return 1;
	}
	fprintf(fd, "%s %s %s %d\n", p.title, p.author, p.publisher, p.price);
	fclose(fd);
	return 0;
}