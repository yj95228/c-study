#include <iostream>
#include "car.h"
using namespace std;

void Car::Accel() {
	if (fuel > 0) {
		speed += 10;
		fuel--;
	}
	else {
		cout << "������ ���ּ���" << endl;
	}
};

void Car::Break() {
	if (speed > 0) speed--;
	else cout << "�ӵ��� 0 �Դϴ�" << endl;
};

void Car::ShowStatus() {
	cout << "�ӵ��� " << speed << ", ����� " << fuel << "�Դϴ�" << endl;
};