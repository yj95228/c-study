#pragma once
#include "Book.h"
class Magazine : public Book {
private:
	int year;
	int month;
public:
	Magazine();
	Magazine(const char* title
		, const char* publiser
		, const char* author
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