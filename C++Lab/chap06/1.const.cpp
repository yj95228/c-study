#include <iostream>
using namespace std;


class simple {
public:
    int a = 10;
    void change() const {
        // a++ : ��������� �� ���� �Ұ�
        cout << "change const" << endl;
    }
    // �Լ��� const ���δ� overload �� ������ �ȴ�
    void change() {
        a++;
        cout << "change" << endl;
    }
};

void func1(const simple s) {
    s.change();
}
int main01() {
    const int a = 10;
    // a = 20; ���� : ���� ���ȭ

    // const simple s; // const�� ����� ��ü�� const �Լ��� ȣ���� �� �ִ�
    simple s;
    s.change();
    func1(s);
    return 0;
}