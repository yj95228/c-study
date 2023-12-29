#pragma once
#include <iostream>
#include "Sample.h"
using namespace std;

class Wrapper2 {
private:
	Sample& s;
	int c;
public:
	Wrapper2(Sample& _s): s(_s) {}
	void print() {
		cout << s.a << "," << s.b << endl;
	}
};