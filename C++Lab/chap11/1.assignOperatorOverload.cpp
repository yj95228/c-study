#include <iostream>
#include <cstring>
using namespace std;

class Point {
private :
	int num;
	char* str;
public:
	Point() { cout << "������" << endl; }
	Point(int num, const char* str):num(num) {
		cout << "������ int , char*" << endl;
		int len = strlen(str);
		this->str = new char[len + 1];
		strcpy(this->str, str);
	}
	virtual ~Point() { cout << "�Ҹ���" << endl; delete[] str; };
	Point(Point& p) :num(p.num) {
		cout << "���� ������" << endl;
		int len = strlen(p.str);
		this->str = new char[len + 1];
		strcpy(this->str, p.str);
	}
	// �⺻ ���Կ�����
	Point& operator=(const Point& p) {
		cout << "�⺻ ���Կ�����" << endl;
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