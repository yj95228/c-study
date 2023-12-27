#include <iostream>
#include "car.h"

int main() {
	// 정적 선언 방식
	Car c;
	c.Accel();
	c.ShowStatus();
	c.Break();
	c.ShowStatus();

	// 동적 선언 방식
	Car* p = new Car;
	p->Accel();
	p->ShowStatus();
	p->Break();
	p->ShowStatus();
	delete p;
	return 0;
}