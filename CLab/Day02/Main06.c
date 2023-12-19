#include <stdio.h>
#include <string.h>

void printName(char names[3][20]) {
	printf("입력하신 이름은\n");
	for (int i = 0; i < 3; i++) {
		printf("%s\n", names[i]);
	}
}

int main06() {
	int arr[2][3];
	arr[0][0] = 1;
	arr[1][2] = 5;

	char names[3][20];
	printf("이름 3개를 입력하세요\n");
	for (int i = 0; i < 3; i++) {
		scanf("%s", names[i]);
	}
	printName(names);
	return 0;
}