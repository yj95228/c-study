#pragma once
using namespace std;
class Sample {
private:
public:
	int a, b;
	Sample() { cout << "������" << endl; }
	Sample(int a, int b):a(a), b(b){
		cout << "a b ������ " << endl;
	}
	~Sample() {}
	void print() {
		cout << this->a << "," << this->b << endl;
	}

	// ���� ������
	// ��ü�� �����ؼ� ������ �� ȣ��Ǵ� ������
	explicit Sample(Sample& s) : a(s.a), b(s.b) {
		cout << "���� ������" << endl;
	}
};