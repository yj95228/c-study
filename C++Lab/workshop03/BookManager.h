#ifndef __BOOKMANAGER_H__
#define __BOOKMANAGER_H__

#include "Book.h"
#include "Magazine.h"
class BookManager
{
private:
	BookManager();
	Book* books[50] = { 0 };
	int index = 0;
public:
	static BookManager* instance;
	static BookManager* getInstance();
	~BookManager();
	void printBook();
	void findBook();
	void insertBook();
	void updateBook();
	void deleteBook();
};
#endif

