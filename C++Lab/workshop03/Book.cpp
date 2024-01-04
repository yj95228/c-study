#include <iostream>
#include <cstring>
#include "Book.h"

using namespace std;
Book::Book() {}
Book::Book(string title
	, string publisher
	, string author
	, int price) : price(price) {
	this->title = title;
	this->publisher = publisher;
	this->author = author;
};
Book::Book(const Book& b) :price(b.price) {
	this->title = title;
	this->publisher = publisher;
	this->author = author;
};
Book::~Book() {

};
void Book::setTitle(string title) {
	this->title = title;
};
string Book::getTitle() const {
	return this->title;
};
void Book::setPublisher(string publisher) {
	this->publisher = publisher;
};
string Book::getPublisher() const {
	return publisher;
};
void Book::setAuthor(string author) {
	this->author = author;
};
string Book::getAuthor() const {
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