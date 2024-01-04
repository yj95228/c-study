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

int main02() {
	Car* c = new Truck(100, 200);
	Truck* t = dynamic_cast<Truck*>(c);
	Car* c1 = new Car(200);
	Truck* t1 = dynamic_cast<Truck*>(c1);
	if (t1 == nullptr) {
		cout << "null" << endl;
	}
	Truck* t2 = new Truck(200, 300);
	Car* c2 = dynamic_cast<Car*>(t2);
	c2->showState();
	return 0;
}