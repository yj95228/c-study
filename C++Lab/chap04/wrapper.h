#pragma once
#include <iostream>
#include "Sample.h"
using namespace std;

class Wrapper {
private:
	Sample s;
	int c;
public:
	Wrapper() {}
	Wrapper(const int& _a, const int& _b, const int& _c): s(_a,_b), c(_c) {}
	void print() {
		cout << s.a << "," << s.b << "," << c << endl;
	}
};