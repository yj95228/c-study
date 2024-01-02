#include <iostream>
#include <cstring>
#include "Book.h"

using namespace std;
Book::Book() {}
Book::Book(const char* title
	, const char* publisher
	, const char* author
	, int price) :price(price) {
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
	strcpy(this->publisher, publisher);
	strcpy(this->author, author);
};
Book::Book(const Book& b) :price(b.price) {
	int len = strlen(b.title);
	title = new char[len + 1];
	strcpy(this->title, b.title);
	strcpy(this->publisher, b.publisher);
	strcpy(this->author, b.author);
};
Book::~Book() {
	delete[] title;
};
void Book::setTitle(const char* title) {
	int len = strlen(title);
	this->title = new char[len + 1];
	strcpy(this->title, title);
};
const char* Book::getTitle() const {
	return this->title;
};
void Book::setPublisher(const char* publisher) {
	strcpy(this->publisher, publisher);
};
const char* Book::getPublisher() const {
	return publisher;
};
void Book::setAuthor(const char* author) {
	strcpy(this->author, author);
};
const char* Book::getAuthor() const {
	return author;
};
int Book::getPrice() const {
	return price;
};
void Book::setPrice(int price) {
	this->price = price;
};
void Book::print() const {
	cout << title << "\t" << publisher
		<< "\t" << author << "\t" << price << endl;
};