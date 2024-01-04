#include <iostream>
#include <cstring>
using namespace std;

template <class T>
class Point {
private:
	T x, y;
public:
	Point(T x, T y) : x(x), y(y) {}
	void print() {
		cout << x << ", " << y << endl;
	}
};

template <class T>
class Wrapper {
private:
	T data;
public:
	Wrapper(T data) : data(data) {}
	void print() {
		cout << "data : " << data << endl;
	}
};

template <>
class Wrapper<const char*> {
private:
	char* data;
	int len;
public:
	Wrapper(const char* data) {
		len = (int)strlen(data);
		this->data = new char[len + 1];
		strcpy(this->data, data);
	}
	~Wrapper() { delete[] data; }
	void print() {
		cout << "data : " << data << endl;
		cout << "len : " << len << endl;
	}
};

template <>
class Wrapper<Point<int>> {
private:
	Point<int> data;
public:
	Wrapper(int x, int y) : data(x, y) {}
	void print() {
		data.print();
	}
};


int main04() {
	Wrapper<int> w1(100);
	w1.print();

	Wrapper<const char*> w2("scsa");
	w2.print();

	Wrapper<Point<int>> w3(10, 20);
	w3.print();
	return 0;
}