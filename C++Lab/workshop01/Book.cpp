#include <iostream>
#include "Book.h"

using namespace std;

int index = 0;

void Book::print() {
	cout << title << "\t" << publisher << "\t" << author << "\t" << price << endl;
}

void printBook(Book* books[]) {
	cout << "번호 \ttitle\tpublisher\tauthor\t price" << endl;
	for (int i = 0; i < index; i++) {
		cout << i + 1;
		books[i]->print();
	}
};
void findBook(Book* books[]) {
	char name[50 + 1];
	cout << "검색하시려는 책의 이름을 입력하세요" << endl;
	cin >> name;
	for (int i = 0; i < index; i++) {
		if (!strcmp(books[i]->title, name)) {
			books[i]->print();
			break;
		}
	}
};
void insertBook(Book* books[]) {
	Book* b = new Book;
	cout << "타이틀을 입력하세요" << endl;
	cin >> b->title;
	cout << "출판사를 입력하세요" << endl;
	cin >> b->publisher;
	cout << "저자를 입력하세요" << endl;
	cin >> b->author;
	cout << "가격을 입력하세요" << endl;
	cin >> b->price;
	books[index] = b;
	index++;
};
void updateBook(Book* books[]) {
	int num;
	cout << "수정하시려는 번호를 입력하세요" << endl;
	cin >> num;
	Book* b = new Book;
	cin >> b->title;
	cout << "타이틀을 입력하세요" << endl;
	cin >> b->title;
	cout << "출판사를 입력하세요" << endl;
	cin >> b->publisher;
	cout << "저자를 입력하세요" << endl;
	cin >> b->author;
	cout << "가격을 입력하세요" << endl;
	cin >> b->price;
	books[num - 1] = b;
};
void deleteBook(Book* books[]) {
	int num;
	cout << "삭제하시려는 번호를 입력하세요" << endl;
	cin >> num;
	books[num - 1] = books[index-1];
};