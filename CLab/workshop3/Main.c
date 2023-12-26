#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylib.h"

int N = 1;
int main() {
	int menu = 0;
	Book* books = (Book*)malloc(sizeof(Book) * N);
	// Book* books = loadFromFile();
	loadFromFile(books);

	while (1) {
		printf("1: ���, 2: ������˻�, 3: �Է�, 4: ����, 5: ����, 0: ����\n");
		
		scanf("%d", &menu);
		switch (menu) {
		case 1:
			func(printBook, books);
			break;
		case 2:
			func(findBook, books);
			break;
		case 3:
			func(insertBook, books);
			break;
		case 4:
			func(editBook, books);
			break;
		case 5:
			func(deleteBook, books);
			break;
		case 0:
			func(bookFree, books);
			exit(0);
			break;
		}
		saveToFile(books);
	}
	return 0;
}