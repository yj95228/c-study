#ifndef __MAGAGINE_H__
#define __MAGAGINE_H__
#include <cstring>
#include "Book.h"
using namespace std;

class Magazine : public Book {
private:
	int year;
	int month;
public:
	Magazine();
	Magazine(string title
		, string publisher
		, string author
		, int price
		, int year
		, int month);
	Magazine(const Magazine& m);
	virtual ~Magazine();
	int getYear();
	void setYear(int year);
	int getMonth();
	void setMonth(int month);

	virtual void print() const;
};

#endif