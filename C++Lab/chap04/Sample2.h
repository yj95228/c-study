#pragma once
#include <iostream>
#include <cstring>


using namespace std;
class Sample2 {
private:
	char* name = NULL;
public:
	int a;
	// ������
	Sample2() {
		cout << "Sample2 ������" << endl;
	}
	Sample2(const char* _name) {
		cout << "Sample2 ������" << endl;
		int len = strlen(_name);
		name = new char[len + 1];
		strcpy(name, _name);
	}
	// �Ҹ���
	~Sample2() {
		if(name != NULL)
			delete[] name;
		cout << "Sample2 �Ҹ���" << endl;
	}

	void print() {
		cout << "Sample2 : " << a << endl;
	}
};