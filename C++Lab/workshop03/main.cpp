#include <iostream>
#include "book.h"
#include "Magazine.h"
#include "BookManager.h"
using namespace std;

int main() {
	//Book* books[10];
	BookManager* man = BookManager::getInstance();
	int menu = 0;
	while (1) {
		cout << "1:���, 2:������˻�, 3:�Է�, 4:����, 5:����, 0:����" << endl;
		cin >> menu;
		switch (menu) {
		case 1:
			man->printBook();
			break;
		case 2:
			man->findBook();
			break;
		case 3:
			man->insertBook();
			break;
		case 4:
			man->updateBook();
			break;
		case 5:
			man->deleteBook();
			break;
		case 0:
			cout << "���α׷��� ����Ǿ����ϴ�." << endl;
			exit(0);
		default:
			break;
		}
	}
	return 0;
}
