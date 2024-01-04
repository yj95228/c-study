#include <iostream>
using namespace std;

class First {
public:
	// 순수 가상함수
	virtual void print() = 0;
};
class Second : public First {
public :
	virtual void print() {
		cout << "Second print" << endl;
	}
};

int main04() {
	// First f;
	// f.print();
	Second s;
	s.print();
	return 0;
}