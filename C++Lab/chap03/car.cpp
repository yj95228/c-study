#include <iostream>
#include "car.h"
using namespace std;

void Car::Accel() {
	if (fuel > 0) {
		speed += 10;
		fuel--;
	}
	else {
		cout << "주유를 해주세요" << endl;
	}
};

void Car::Break() {
	if (speed > 0) speed--;
	else cout << "속도가 0 입니다" << endl;
};

void Car::ShowStatus() {
	cout << "속도는 " << speed << ", 연료는 " << fuel << "입니다" << endl;
};