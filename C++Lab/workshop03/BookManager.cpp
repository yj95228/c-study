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
	cout << " ��ȣ \t å�̸� \t å���� \t å���� \t ���ǻ� \t �� \t ��\n";
	for (i = 0; i < index; i++) {
		cout << i + 1 << "\t";
		books[i]->print();
	}
};
void BookManager::findBook() {
	int i;
	char findBook[50];
	cout << "�˻��� å�̸��� �Է��ϼ���\n";
	cin >> findBook;
	for (i = 0; i < index; i++) {
		if (books[i]->getTitle() == findBook) {
			cout << "  å�̸� \t\t å���� \t\t å���� \t\t ���ǻ�" << endl;
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

	cout << "1, å�Է�, 2. �����Է�" << endl;
	int menu;
	cin >> menu;
	if (menu == 1) {
		books[index] = new Book();

		cout << "åŸ��Ʋ�� �Է��ϼ���" << endl;
		cin >> title;
		books[index]->setTitle(title);
		cout << "å������ �Է��ϼ���\n";
		cin >> price;
		books[index]->setPrice(price);
		cout << "å������ �Է��ϼ���\n";
		cin >> author;
		books[index]->setAuthor(author);
		cout << "���ǻ縦 �Է��ϼ���\n";
		cin >> publisher;
		books[index]->setPublisher(publisher);
		index++;
	}
	else {
		// �����Է��ڵ� here
		Magazine* m = new Magazine();
		cout << "���� �̸��� �Է��ϼ���" << endl;
		cin >> title;
		m->setTitle(title);
		cout << "���� ������ �Է��ϼ���\n";
		cin >> price;
		m->setPrice(price);
		cout << "���� ���ڸ� �Է��ϼ���\n";
		cin >> author;
		m->setAuthor(author);
		cout << "���� ���ǻ縦 �Է��ϼ���\n";
		cin >> publisher;
		m->setPublisher(publisher);
		cout << "���� �Ⱓ �⵵�� �Է��ϼ���\n";
		cin >> year;
		m->setYear(year);
		printf("���� �Ⱓ ���� �Է��ϼ���\n");
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

	cout << "������ å��ȣ�� �Է��ϼ���\n";
	cin >> i;
	cout << "������ å�̸��� �Է��ϼ���\n";
	cin >> title;
	cout << "������ å������ �Է��ϼ���\n";
	cin >> price;
	cout << "������ å������ �Է��ϼ���\n";
	cin >> author;
	cout << "������ ���ǻ縦 �Է��ϼ���\n";
	cin >> publisher;

	books[i - 1]->setTitle(title);
	books[i - 1]->setPrice(price);
	books[i - 1]->setAuthor(author);
	books[i - 1]->setPublisher(publisher);
};
void BookManager::deleteBook() {
	int i;
	cout << "������ å��ȣ�� �Է��ϼ���\n";
	cin >> i;

	books[i - 1]->setTitle(books[index - 1]->getTitle());
	books[i - 1]->setPrice(books[index - 1]->getPrice());
	books[i - 1]->setAuthor(books[index - 1]->getAuthor());
	books[i - 1]->setPublisher(books[index - 1]->getPublisher());

	delete books[index - 1];
	index--;

};