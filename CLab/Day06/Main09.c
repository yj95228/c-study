#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	FILE* afd;
	FILE* bfd;
	int age = 10;
	char name[20] = "홍길동\0";
	int res;
	char resname[20];

	afd = fopen("c.txt", "w");
	if (afd != NULL) {
		fwrite(&age, sizeof(int), 1, afd);
		fwrite(name, sizeof(char), strlen(name), afd);
		fclose(afd);
		printf("파일 쓰기가 완료되었습니다\n");
	}
	bfd = fopen("c.txt", "r");
	if (bfd != NULL) {
		fread(&res, sizeof(res), 1, bfd);
		fwrite(resname, sizeof(resname), strlen(resname), bfd);
		fclose(bfd);
		printf("파일 쓰기가 완료되었습니다\n");
	}
}