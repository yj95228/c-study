#ifndef __CAR_H__
#define __CAR_H__
#include <iostream>
using namespace std;
class Car {
public:
	int speed = 10;
	int fuel = 10;
	void Accel();
	void Break();
	void ShowStatus();
};
#endif // __CAR_H__