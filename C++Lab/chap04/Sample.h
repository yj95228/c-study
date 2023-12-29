#pragma once
#include <iostream>
using namespace std;
class Sample {
public:
	int a = 10, b = 20;
public:
	//default
	Sample() { cout << "constructor" << endl; }
	// constructor overload
	// constructor initialize
	Sample(const int& _a):a(_a) {
		a = _a;
		cout << "constructor : " << a << endl;
	}
	Sample(const int& _a, const int& _b): a(_a), b(_b) {
		// a = _a; b = _b;
		cout << "constructor : " << a << "," << b << endl;
	}
	void print() const {
		cout << a << "," << b << endl;
	}
};