extern int index;

int funcPoint(int(*fp)(char(*)[50], int*), char(*name)[50], int* price) {
	return fp(name, price);
}

void printBook(char(*name)[50], int* price) {
	for (int i = 0; i < index; i++) {
		printf("[%d] %s %d\n", i, name[i], price[i]);
	}
};
void insertBook(char(*name)[50], int* price) {
	printf("도서명을 입력하세요\n");
	scanf("%s", name[index]);

	printf("가격을 입력하세요\n");
	scanf("%d", &price[index]);
	index++;
};
void updateBook(char(*name)[50], int* price) {
	int search;
	printf("수정할 인덱스를 선택해주세요\n");
	scanf("%d", &search);
	if (search <= index) {
		printf("수정할 도서명을 입력해주세요\n");
		scanf("%s", name[search]);
	}
	else {
		printf("인덱스가 너무 큽니다\n");
	}
};
void deleteBook(char(*name)[50], int* price) {
	int search;
	printf("수정할 인덱스를 선택해주세요\n");
	scanf("%d", &search);
	if (search <= index) {
		strcpy(name[search], name[index - 1]);
		price[search] = price[index - 1];
		index--;
	}
	else {
		printf("인덱스가 너무 큽니다\n");
	}
};
void findBook(char(*name)[50], int* price) {
	char keyword[50];
	printf("도서명을 입력해주세요\n");
	scanf("%s", keyword);
	for (int i = 0; i < index; i++) {
		if (!strcmp(name[i], keyword)) {
			printf("[%d] %s %d", i, name[i], price[i]);
		}
	}
};