#include <iostream>

using namespace std;

class Point {
private:
	int x, y;
public:
	Point() {}
	Point(int x, int y) { this->x; this->y; }
	void print() const {
		cout << this->x << "," << this->y << endl;
	}
	Point& operator+(int a) {
		this->x += a;
		this->y += a;
		return *this;
	}
	friend Point& operator+(Point& p1, Point& p2);
	friend Point& operator+(int a, Point& p1);
};
// 전역함수로 + 연산자 재정의
Point& operator+(Point& p1, Point& p2) {
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}
Point& operator+(int a, Point& p1) {
	p1.x += a;
	p1.y += a;
	return p1;
}

int main03() {
	Point p1(3, 5);
	Point p2(10, 20);
	Point& res = p1 + p2;
	res = p1.operator+(3);
	res = 3 + p1;
	res = 3 + p1 + 3 + 3;
	res.print();
	return 0;
}