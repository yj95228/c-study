#include <stdio.h>
#include <stdlib.h>

int main06() {
	int arr[3];
	arr[0] = 11;
	arr[1] = 22;
	arr[2] = 33;

	// 문자열
	char name[10] = "animal";
	// char name[10] = { 'a','n','i','m','a','l' };
	name[0] = 'a';
	name[1] = 'n';
	name[2] = 'i';
	name[3] = 'm';
	name[4] = 'a';
	name[5] = 'l';
	// printf("%s", name);
	scanf("%s", name);	// name 자체가 주소 변수라서 &name 아님
	printf("%s", name);
	return 0;
}