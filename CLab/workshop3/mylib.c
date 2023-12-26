#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylib.h"

int index = 0;
extern int N;

void func(void (*fp)(Book**), Book** books) {
	fp(books);
}

void printBook(Book** books) {
	printf("[번호]\t제목\t저자\t출판사\t가격\n");
	for (int i = 0; i < index; i++) {
		printf("[%d]\t%s\t%s\t%s\t%d\n", i, books[i]->name, books[i]->author, books[i]->publisher, books[i]->price);
	}
};
void insertBook(Book** books) {
	if (index == N) {
		books = realloc(books, sizeof(Book*) * N * 2);
		if (books == NULL) {
			printf("메모리 할당 실패\n");
			exit(0);
		}
		N *= 2;
	}

	books[index] = (Book*)malloc(sizeof(Book));
	printf("도서명을 입력하세요\n");
	scanf("%s", books[index]->name);
	// while (gets(stdin) == '\n') break; // fflush(stdout)
	printf("저자를 입력하세요\n");
	scanf("%s", &(books[index]->author));
	// while (gets(stdin) == '\n') break; // fflush(stdout)
	printf("출판사를 입력하세요\n");
	scanf("%s", &(books[index]->publisher));
	// while (gets(stdin) == '\n') break; // fflush(stdout)
	printf("가격을 입력하세요\n");
	scanf("%d", &(books[index]->price));
	index++;
};
void insertBook2(Book* books[], int* N) {
	if (index == N) {
		(*books) = realloc(*books, sizeof(Book*) * (*N) * 2);
		if (books == NULL) {
			printf("메모리 할당 실패\n");
			exit(0);
		}
		(*N) *= 2;
	}

	books[index] = (Book*)malloc(sizeof(Book));
	printf("도서명을 입력하세요\n");
	scanf("%s", books[index]->name);
	while (gets(stdin) == '\n') break; // fflush(stdout)
	printf("저자를 입력하세요\n");
	scanf("%s", &(books[index]->author));
	while (gets(stdin) == '\n') break; // fflush(stdout)
	printf("출판사를 입력하세요\n");
	scanf("%s", &(books[index]->publisher));
	while (gets(stdin) == '\n') break; // fflush(stdout)
	printf("가격을 입력하세요\n");
	scanf("%d", &(books[index]->price));
	index++;
}
void editBook(Book** books) {
	int search;
	printf("수정할 인덱스를 선택해주세요\n");
	scanf("%d", &search);
	if (search <= index) {
		printf("수정할 도서명을 입력해주세요\n");
		scanf("%s", books[search]->name);
	}
	else {
		printf("인덱스가 너무 큽니다\n");
	}
};
void deleteBook(Book** books) {
	int search;
	printf("수정할 인덱스를 선택해주세요\n");
	scanf("%d", &search);
	if (search < index) {
		free(books[search]);
		strcpy(books[search]->name, books[index - 1]->name);
		books[search]->price = books[index - 1]->price;
		index--;
	}
	else {
		printf("인덱스가 너무 큽니다\n");
	}
};
void findBook(Book** books) {
	char keyword[50];
	printf("도서명을 입력해주세요\n");
	scanf("%s", keyword);
	for (int i = 0; i < index; i++) {
		if (!strcmp(books[i]->name, keyword)) {
			printf("[%d] %s %d\n", i, books[i]->name, books[i]->price);
		}
	}
};
void bookFree(Book** books) {
	for (int i = 0; i < index; i++) {
		free(books[i]);
	}
	free(books);
}
void saveToFile(Book* books[10]) {
	FILE* fdw;
	fdw = fopen("test.txt", "w");
	if (fdw == NULL) {
		printf("파일이 쓰기 모드로 열리지 않았습니다\n");
	}
	else {
		for (int i = 0; i < index; i++) {
			fprintf(fdw, "%s\t%s\t%s\t%d\n", books[i]->name, books[i]->author, books[i]->publisher, books[i]->price);
		}
	}
	fclose(fdw);
	return 0;
}
void loadFromFile(Book* books[10]) {
	FILE* fdr;
	fdr = fopen("test.txt", "r");
	if (fdr == NULL) {
		printf("파일이 읽기 모드로 열리지 않았습니다\n");
	}
	Book b;
	while (fscanf(fdr, "%s\t%s\t%s\t%d\n", b.name, b.author, b.publisher, &b.price) != EOF) {
		books[index] = (Book*)malloc(sizeof(Book));
		strcpy(books[index]->name, b.name);
		strcpy(books[index]->author, b.author);
		strcpy(books[index]->publisher, b.publisher);
		books[index]->price = b.price;
		// printf("%s\t%s\t%s\t%d\n", b.name, b.author, b.publisher, b.price);
		index++;
		fflush(fdr);
	}
	fclose(fdr);
}