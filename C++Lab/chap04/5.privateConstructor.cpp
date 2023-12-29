#include <iostream>
using namespace std;

class PrivateConstructor {
private:
	int a;
	// Singleton pattern
	PrivateConstructor* p;
	PrivateConstructor(int _a) :a(_a){}
public:
	PrivateConstructor() {}
	PrivateConstructor& getInstance(int a){
		if (p != NULL) {
			PrivateConstructor* p = new PrivateConstructor(a);
		}
		return *p;
	}
};

int main05() {
	PrivateConstructor s;
	PrivateConstructor& s1 = s.getInstance(10);

	return 0;
}