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
		printf("������ ������ �ʾҽ��ϴ�\n");
		return 1;
	}
	fprintf(fd, "%d %s ", 7, "�Ѹ�");
	fflush(fd);
	// SEEK_SET  ������ ����
	// SEEK_CUR  ���� �б�/���� ������ ��ġ
	// SEEK_END  ������ ��
	fseek(fd, 0, SEEK_SET);
	fprintf(fd, "%d %s ", 8, "�����");
	fflush(fd);
	fclose(fd);
	return 1;
}