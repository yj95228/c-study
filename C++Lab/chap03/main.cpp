#include <iostream>
#include "car.h"

int main() {
	// ���� ���� ���
	Car c;
	c.Accel();
	c.ShowStatus();
	c.Break();
	c.ShowStatus();

	// ���� ���� ���
	Car* p = new Car;
	p->Accel();
	p->ShowStatus();
	p->Break();
	p->ShowStatus();
	delete p;
	return 0;
}