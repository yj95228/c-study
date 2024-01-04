#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int x, int y): x(x), y(y) {}
	// memberFunction : + ÀçÁ¤ÀÇ
	Point& operator+(Point& p) {
		this->x += p.x;
		this->y += p.y;
		return *this;
	}
	Point& operator<<(int a) {
		this->x <<= a;
		this->y <<= a;
		return *this;
	};
	void print() const {
		cout << x << "," << y << endl;
	}
};
int main02() {
	Point p1(2, 3);
	Point p2(3, 5);
	// Point& res = p1.operator+(p2);
	Point& res = p1 + p2;
	res.print();
	res = p1 << 1;
	res.print();
	return 0;
}