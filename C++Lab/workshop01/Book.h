#ifndef __BOOK_H__
#define __BOOK_H__
class Book {
public:
	char title[50 + 1];
	char publisher[50 + 1];
	char author[50 + 1];
	int price;
	void print();
};

void printBook(Book* books[]);
void findBook(Book* books[]);
void insertBook(Book* books[]);
void updateBook(Book* books[]);
void deleteBook(Book* books[]);

#endif // __BOOK_H__