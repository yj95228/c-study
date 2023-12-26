#pragma once
typedef struct {
	char name[50];
	int price;
	char author[20];
	char publisher[20];
} Book;

void insertBook(Book** books);
void insertBook2(Book* books[]);
void printBook(Book** books);
void editBook(Book** books);
void deleteBook(Book** books);
void findBook(Book** books);
void bookFree(Book** books);
void func(void (*fp)(Book**), Book** books);
void saveToFile(Book* books[10]);
void loadFromFile(Book* books[10]);