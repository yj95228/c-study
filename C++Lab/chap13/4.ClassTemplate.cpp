#include <iostream>

using namespace std;

template <class T>
class Point {
private:
	T x, y;
public:
	Point(T a, T b) : x(x), y(y) {}
	void print() const;
};

template<class T>
void Point<T>::print() const {
	cout << "x = " << x << ", y = " << y << endl;
}

int main04() {
	Point<int> p1(3, 4);
	p1.print();

	Point<double> p2(3.14, 4.5);
	p2.print();

	Point<char> p3('T', 'F');
	p3.print();

	return 0;
}