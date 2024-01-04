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

	// cast 연산자
	double res1 = static_cast<double>(a) / static_cast<double>(b);
	cout << res1 << endl;

	int* p = &a;
	float* pf = (float*)p;	// fullcast 에서 가능하지만 안전하지 않다
	//float* pf1 = static_cast<float*>(p);	static_cast 캐스팅이 안됨

	Car* c = new Car(100);
	Truck* t = static_cast<Truck*>(c);	// virtual 여부와 상관없이 다운캐스팅이 됩니다
	return 0;
}