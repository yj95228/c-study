#include <iostream>
#include "Magazine.h"
using namespace std;

Magazine::Magazine() {};
Magazine::Magazine(string title
	, string publisher
	, string author
	, int price
	, int year
	, int month) :Book(title, publisher, author, price), year(year), month(month) {};
Magazine::Magazine(const Magazine& m) :Book(m.getTitle(),
	m.getPublisher(), m.getAuthor(), m.getPrice())
	, year(year), month(month) {};

Magazine::~Magazine() {};
int Magazine::getYear() {
	return this->year;
};

void Magazine::setYear(int year) {
	this->year = year;
};

int Magazine::getMonth() {
	return month;
};

void Magazine::setMonth(int month) {
	this->month = month;
};

void Magazine::print() const {
	cout << this->getTitle() << "\t" << getPublisher()
		<< "\t" << getAuthor() << "\t" << getPrice()
		<< "\t" << year << "\t" << month << endl;
}