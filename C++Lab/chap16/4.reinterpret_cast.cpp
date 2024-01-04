#include <iostream>
using namespace std;

int main04() {
	int a = 100;
	char* p = reinterpret_cast<char*>(&a);
	// 전혀 안정성 보장되지 않습니다

	return 0;
}