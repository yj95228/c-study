#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main04() {
	FILE* fdw;
	fdw = fopen("test.txt", "w");
	if (fdw == NULL) {
		printf("������ ���� ���� ������ �ʾҽ��ϴ�\n");
		return 1;
	}
	fprintf(fdw, "%s", "�߾���������");
	printf("���Ⱑ �Ϸ�Ǿ����ϴ�\n");
	fflush(fdw);
	fclose(fdw);
	return 0;
}