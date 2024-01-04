#include <iostream>
#include "Point.h"
#include "Point.cpp"
using namespace std;

int main() {
	Point<int> p1(3, 4);
	p1.print();
	return 0;
}