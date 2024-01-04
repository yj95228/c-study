#include <iostream>
#include <cstring>
using namespace std;

class Point {
private :
	int num;
	char* str;
public:
	Point() { cout << "생성자" << endl; }
	Point(int num, const char* str):num(num) {
		cout << "생성자 int , char*" << endl;
		int len = strlen(str);
		this->str = new char[len + 1];
		strcpy(this->str, str);
	}
	virtual ~Point() { cout << "소멸자" << endl; delete[] str; };
	Point(Point& p) :num(p.num) {
		cout << "복사 생성자" << endl;
		int len = strlen(p.str);
		this->str = new char[len + 1];
		strcpy(this->str, p.str);
	}
	// 기본 대입연산자
	Point& operator=(const Point& p) {
		cout << "기본 대입연산자" << endl;
		this->num = p.num;
		
		int len = strlen(p.str);
		this->str = new char[len + 1];
		strcpy(this->str, p.str);
		
		return *this;
	}
	friend ostream& operator<< (ostream& ost, Point& p);
};
ostream& operator<< (ostream& ost, Point& p) {
	ost << "[ num = " << p.num << ", str = " << p.str <<" ]"<<  endl;
	return ost;
}

int main() {
	Point p1(5, "hello");
	cout << p1 << endl;
	Point p2 =p1;
	cout << p2 << endl;
	Point p3;
	p3 = p1;
	cout << p3 << endl;
	return 0;
}