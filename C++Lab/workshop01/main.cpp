#include <iostream>
#include "book.h"

using namespace std;

int main() {
	Book* books[10];
	int menu = 0;

	while (1) {
		cout << "1: ���, 2: ������˻�, 3: �Է�, 4: ����, 5: ����, 0: ����" << endl;
		cin >> menu;

		switch (menu) {
		case 1:
			printBook(books);
			break;
		case 2:
			findBook(books);
			break;
		case 3:
			insertBook(books);
			break;
		case 4:
			updateBook(books);
			break;
		case 5:
			deleteBook(books);
			break;
		case 0:
			exit(0);
			break;
		}
	}
	return 0;
}