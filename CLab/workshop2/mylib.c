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
	printf("�������� �Է��ϼ���\n");
	scanf("%s", name[index]);

	printf("������ �Է��ϼ���\n");
	scanf("%d", &price[index]);
	index++;
};
void updateBook(char(*name)[50], int* price) {
	int search;
	printf("������ �ε����� �������ּ���\n");
	scanf("%d", &search);
	if (search <= index) {
		printf("������ �������� �Է����ּ���\n");
		scanf("%s", name[search]);
	}
	else {
		printf("�ε����� �ʹ� Ů�ϴ�\n");
	}
};
void deleteBook(char(*name)[50], int* price) {
	int search;
	printf("������ �ε����� �������ּ���\n");
	scanf("%d", &search);
	if (search <= index) {
		strcpy(name[search], name[index - 1]);
		price[search] = price[index - 1];
		index--;
	}
	else {
		printf("�ε����� �ʹ� Ů�ϴ�\n");
	}
};
void findBook(char(*name)[50], int* price) {
	char keyword[50];
	printf("�������� �Է����ּ���\n");
	scanf("%s", keyword);
	for (int i = 0; i < index; i++) {
		if (!strcmp(name[i], keyword)) {
			printf("[%d] %s %d", i, name[i], price[i]);
		}
	}
};