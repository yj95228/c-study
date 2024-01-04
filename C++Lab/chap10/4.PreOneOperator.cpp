#include <iostream>

using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int x, int y): x(x), y(y) {}
	void print() const {
		cout << this->x << "," << this->y << endl;
	}
	friend Point& operator++(Point& p);
	/*Point& operator++(){
		this->x += 1;
		this->y += 1;
		return *this;
	}*/
	Point& operator--() {
		this->x -= 1;
		this->y -= 1;
		return *this;
	}
};

Point& operator++(Point& p) {
	p.x += 1;
	p.y += 1;
	return p;
}

int main04() {
	Point p1(10, 20);
	p1.print();

	int a = 10;
	++a;

	Point& res = ++p1;
	p1.print();

	--p1;
	p1.print();
	return 0;
}