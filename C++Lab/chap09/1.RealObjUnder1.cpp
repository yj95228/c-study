#include <iostream>

using namespace std;

class Data {
private:
	int data;
public:
	Data(int data) : data(data) {}
	void Add(int num) {
		this->data += num;
	}
	void ShowData() {
		cout << "data : " << data << endl;
	}
};

int main01() {
	Data obj(15);
	obj.Add(10);
	obj.ShowData();
	return 0;
}