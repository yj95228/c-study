#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main03() {
	FILE* fdr;
	fdr = fopen("test.txt", "r");
	if (fdr == NULL) {
		printf("������ �б� ���� ������ �ʾҽ��ϴ�\n");
	}
	else {
		printf("������ �б� ���� ���Ƚ��ϴ�\n");
		fclose(fdr);
	}

	FILE* fdw;
	fdw = fopen("test.txt", "w");
	if (fdw == NULL) {
		printf("������ ���� ���� ������ �ʾҽ��ϴ�\n");
	}
	else {
		printf("������ ���� ���� ���Ƚ��ϴ�\n");
		fclose(fdw);
	}
	return 0;
}