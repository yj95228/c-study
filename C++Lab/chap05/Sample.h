#pragma once
using namespace std;
class Sample {
private:
public:
	int a, b;
	Sample() { cout << "생성자" << endl; }
	Sample(int a, int b):a(a), b(b){
		cout << "a b 생성자 " << endl;
	}
	~Sample() {}
	void print() {
		cout << this->a << "," << this->b << endl;
	}

	// 복사 생성자
	// 객체를 복사해서 생성할 때 호출되는 생성자
	explicit Sample(Sample& s) : a(s.a), b(s.b) {
		cout << "복사 생성자" << endl;
	}
};