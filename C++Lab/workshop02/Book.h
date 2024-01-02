#pragma once
class Book
{
private:
	char* title;
	char publisher[50 + 1];
	char author[50 + 1];
	int price;
public:
	Book();
	Book(const char* title
		, const char* publiser
		, const char* author
		, int price);
	Book(const Book& b);
	virtual ~Book();
	void setTitle(const char* title);
	const char* getTitle() const;
	void setPublisher(const char* publisher);
	const char* getPublisher() const;
	void setAuthor(const char* author);
	const char* getAuthor() const;
	void setPrice(int price);
	int getPrice() const;
	virtual void print() const;
};
