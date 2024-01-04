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
	friend ostream& operator<<(ostream& os, Point& p);
};

 ostream& operator<<(ostream& os, Point& p) {
	 os << "[x = " << p.x << ", y = " << p.y << "] ";
	 return os;
}

int main() {
	Point p1(10, 20);
	p1.print();

	Point p2(30, 40);

	cout << p1 << p2 << endl;
	
	return 0;
}