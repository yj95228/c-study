#include <iostream>
#include "BookManager.h"

using namespace std;

BookManager* BookManager::instance = NULL;

BookManager::BookManager() {}
BookManager* BookManager::getInstance() {
	if (instance == NULL) {
		instance = new BookManager();
	}
	return instance;
};
BookManager::~BookManager() {};
void BookManager::printBook() {
	int i;
	cout << " 번호 \t 책이름 \t 책가격 \t 책저자 \t 출판사 \t 년 \t 월\n";
	for (i = 0; i < index; i++) {
		cout << i + 1 << "\t";
		books[i]->print();
	}
};
void BookManager::findBook() {
	int i;
	char findBook[50];
	cout << "검색할 책이름을 입력하세요\n";
	cin >> findBook;
	for (i = 0; i < index; i++) {
		if (books[i]->getTitle() == findBook) {
			cout << "  책이름 \t\t 책가격 \t\t 책저자 \t\t 출판사" << endl;
			cout << i + 1 << ", ";
			books[i]->print();
			break;
		}
	}
};
void BookManager::insertBook() {
	char title[50];
	int price;
	char author[50];
	char publisher[50];
	int year;
	int month;

	cout << "1, 책입력, 2. 잡지입력" << endl;
	int menu;
	cin >> menu;
	if (menu == 1) {
		books[index] = new Book();

		cout << "책타이틀을 입력하세요" << endl;
		cin >> title;
		books[index]->setTitle(title);
		cout << "책가격을 입력하세요\n";
		cin >> price;
		books[index]->setPrice(price);
		cout << "책저자을 입력하세요\n";
		cin >> author;
		books[index]->setAuthor(author);
		cout << "출판사를 입력하세요\n";
		cin >> publisher;
		books[index]->setPublisher(publisher);
		index++;
	}
	else {
		// 잡지입력코드 here
		Magazine* m = new Magazine();
		cout << "잡지 이름을 입력하세요" << endl;
		cin >> title;
		m->setTitle(title);
		cout << "잡지 가격을 입력하세요\n";
		cin >> price;
		m->setPrice(price);
		cout << "잡지 저자를 입력하세요\n";
		cin >> author;
		m->setAuthor(author);
		cout << "잡지 출판사를 입력하세요\n";
		cin >> publisher;
		m->setPublisher(publisher);
		cout << "잡지 출간 년도를 입력하세요\n";
		cin >> year;
		m->setYear(year);
		printf("잡지 출간 월을 입력하세요\n");
		cin >> month;
		m->setMonth(month);
		books[index] = m;
		index++;
	}
};
void BookManager::updateBook() {
	int i;
	char title[50];
	int price;
	char author[50];
	char publisher[50];

	cout << "수정할 책번호을 입력하세요\n";
	cin >> i;
	cout << "수정할 책이름을 입력하세요\n";
	cin >> title;
	cout << "수정할 책가격을 입력하세요\n";
	cin >> price;
	cout << "수정할 책저자을 입력하세요\n";
	cin >> author;
	cout << "수정할 출판사를 입력하세요\n";
	cin >> publisher;

	books[i - 1]->setTitle(title);
	books[i - 1]->setPrice(price);
	books[i - 1]->setAuthor(author);
	books[i - 1]->setPublisher(publisher);
};
void BookManager::deleteBook() {
	int i;
	cout << "삭제할 책번호을 입력하세요\n";
	cin >> i;

	books[i - 1]->setTitle(books[index - 1]->getTitle());
	books[i - 1]->setPrice(books[index - 1]->getPrice());
	books[i - 1]->setAuthor(books[index - 1]->getAuthor());
	books[i - 1]->setPublisher(books[index - 1]->getPublisher());

	delete books[index - 1];
	index--;

};