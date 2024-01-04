#include <iostream>

using namespace std;

class Point {
private:
	int x, y;
public:
	friend Point add(Point p1, Point p2);
	friend Point operator+(Point p1, Point p2);
	friend Point operator+(Point p1, int a);
	friend Point operator+(int a, Point p1);
	Point(int x, int y) :x(x), y(y) {}
	void print() {
		cout << x << "," << y << endl;
	}
};
int add(int a, int b) {
	return a + b;
}
Point add(Point p1, Point p2) {
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}
Point operator+(Point p1, Point p2) {
	p1.x += p2.x;
	p1.y += p2.y;
	return p1;
}
Point operator+(Point p1, int a) {
	p1.x += a;
	p1.y += a;
	return p1;
}
Point operator+(int a, Point p1) {
	p1.x -= a;
	p1.y -= a;
	return p1;
}
int main01() {
	int a = 3, b = 5;
	a + b;
	Point p1(10, 15);
	Point p2(20, 25);

	Point res = add(p1, p2);
	res.print();

	Point res2 = p1 + p2; // operateor+(p1, p2)
	res2.print();

	res = 10 + p1;
	res.print();

	return 0;
}