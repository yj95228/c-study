#include <iostream>
#include "Book.h"

using namespace std;

int index = 0;

void Book::print() {
	cout << title << "\t" << publisher << "\t" << author << "\t" << price << endl;
}

void printBook(Book* books[]) {
	cout << "��ȣ \ttitle\tpublisher\tauthor\t price" << endl;
	for (int i = 0; i < index; i++) {
		cout << i + 1;
		books[i]->print();
	}
};
void findBook(Book* books[]) {
	char name[50 + 1];
	cout << "�˻��Ͻ÷��� å�� �̸��� �Է��ϼ���" << endl;
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
	cout << "Ÿ��Ʋ�� �Է��ϼ���" << endl;
	cin >> b->title;
	cout << "���ǻ縦 �Է��ϼ���" << endl;
	cin >> b->publisher;
	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> b->author;
	cout << "������ �Է��ϼ���" << endl;
	cin >> b->price;
	books[index] = b;
	index++;
};
void updateBook(Book* books[]) {
	int num;
	cout << "�����Ͻ÷��� ��ȣ�� �Է��ϼ���" << endl;
	cin >> num;
	Book* b = new Book;
	cin >> b->title;
	cout << "Ÿ��Ʋ�� �Է��ϼ���" << endl;
	cin >> b->title;
	cout << "���ǻ縦 �Է��ϼ���" << endl;
	cin >> b->publisher;
	cout << "���ڸ� �Է��ϼ���" << endl;
	cin >> b->author;
	cout << "������ �Է��ϼ���" << endl;
	cin >> b->price;
	books[num - 1] = b;
};
void deleteBook(Book* books[]) {
	int num;
	cout << "�����Ͻ÷��� ��ȣ�� �Է��ϼ���" << endl;
	cin >> num;
	books[num - 1] = books[index-1];
};