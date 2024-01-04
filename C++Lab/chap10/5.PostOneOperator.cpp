#include <iostream>

using namespace std;

class Point {
private :
	int x, y;
public :
	
	Point(int x, int y) :x(x), y(y) {}
	Point(const Point& p) :x(p.x), y(p.y) {}
	void print()const {
		cout << this->x << "," << this->y << endl;
	}
	// 후치 단일연산자에 맴버함수 선언방식
	/*const Point& operator++(int ) {
		const Point tmp(this->x, this->y);
		this->x += 1;
		this->y += 1;
		return tmp;
	}*/
	friend const Point operator++(Point& p, int);
};
// 후치 단일연산자에 전역함수 선언방식
 const Point operator++(Point& p, int) {
	const static Point tmp(p.x, p.y);
	p.x++;
	p.y++;
	return tmp;
}
int main() {
	Point p1(10, 20);
	p1.print();

	const Point& res = p1++;

	res.print();
	p1.print();

	const Point& rr = res;
	printf("%u %u\n", &rr, &res);
	rr.print();
	
	return 0;
}