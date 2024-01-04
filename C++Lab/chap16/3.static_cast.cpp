#include <iostream>

using namespace std;

class Car {
private:
	int fuel;
public:
	Car(int fuel) : fuel(fuel) {}
	virtual void showState() {
		cout << "fuel : " << fuel << endl;
	}
};
class Truck : public Car {
private:
	int weight;
public:
	Truck(int fuel, int weight) :Car(fuel), weight(weight) {}
	void showState() {
		Car::showState();
		cout << "weight : " << weight << endl;
	}
};

int main03() {
	// full casting
	int a = 10, b = 20;
	double res = (double)a / (double)b;
	cout << res << endl;

	// cast ������
	double res1 = static_cast<double>(a) / static_cast<double>(b);
	cout << res1 << endl;

	int* p = &a;
	float* pf = (float*)p;	// fullcast ���� ���������� �������� �ʴ�
	//float* pf1 = static_cast<float*>(p);	static_cast ĳ������ �ȵ�

	Car* c = new Car(100);
	Truck* t = static_cast<Truck*>(c);	// virtual ���ο� ������� �ٿ�ĳ������ �˴ϴ�
	return 0;
}