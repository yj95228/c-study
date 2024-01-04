#ifndef __BOOK_H__
#define __BOOK_H__
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Book
{
protected:
	string title;
	string publisher;
	string author;
	int price;
public:
	Book();
	Book(string title
		, string publiser
		, string author
		, int price);
	Book(const Book& b);
	virtual ~Book();
	void setTitle(string title);
	string getTitle() const;
	void setPublisher(string publisher);
	string getPublisher() const;
	void setAuthor(string author);
	string getAuthor() const;
	void setPrice(int price);
	int getPrice() const;
	virtual void print() const;
};

#endif


