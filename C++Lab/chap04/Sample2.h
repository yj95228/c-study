#pragma once
#include <iostream>
#include <cstring>


using namespace std;
class Sample2 {
private:
	char* name = NULL;
public:
	int a;
	// 持失切
	Sample2() {
		cout << "Sample2 持失切" << endl;
	}
	Sample2(const char* _name) {
		cout << "Sample2 持失切" << endl;
		int len = strlen(_name);
		name = new char[len + 1];
		strcpy(name, _name);
	}
	// 社瑚切
	~Sample2() {
		if(name != NULL)
			delete[] name;
		cout << "Sample2 社瑚切" << endl;
	}

	void print() {
		cout << "Sample2 : " << a << endl;
	}
};