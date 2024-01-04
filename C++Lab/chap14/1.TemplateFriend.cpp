#include <iostream>

using namespace std;

template <class T>
class Point {
private:
	T x, y;
public:
	Point(T x, T y) : x(x), y(y) {}
	void print() const;
	friend Point<int> operator+(const Point<int>& p1, const Point<int>& p2);
	friend Point<double> operator+(const Point<double>& p1, const Point<double>& p2);
};

template<class T>
void Point<T>::print() const {
	cout << "x = " << x << ", y = " << y << endl;
}

Point<int> operator+(const Point<int>& p1, const Point<int>& p2) {
	cout << "int " << endl;
	return Point<int>(p1.x + p2.x, p1.y + p2.y);
}
Point<double> operator+(const Point<double>& p1, const Point<double>& p2) {
	cout << "double " << endl;
	return Point<double>(p1.x + p2.x, p1.y + p2.y);
}

int main01() {
	Point<int> p1(2, 4);
	Point<int> p2(6, 8);

	Point<int> res = p1 + p2;
	res.print();

	return 0;
}