#include <iostream>
using namespace std;


class Simple {
public:
    int a = 10;
    void change() const {
        // a++ : 멤버변수의 값 변경 불가
        cout << "change const" << endl;
    }
    // 함수의 const 여부는 overload 의 조건이 된다
    void change() {
        a++;
        cout << "change" << endl;
    }
};

void func1(const Simple s) {
    s.change();
}
int main01() {
    const int a = 10;
    // a = 20; 변수 : 값의 상수화

    // const simple s; // const로 선언된 객체는 const 함수만 호출할 수 있다
    Simple s;
    s.change();
    func1(s);
    return 0;
}