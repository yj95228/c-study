#pragma once
#include <iostream>
using namespace std;

class Boy2;
class Girl2;

int saveMoney(Boy2& b, Girl2& g);

class Girl2 {
private:
    int money = 200;
    friend int saveMoney(Boy2& b, Girl2& g);
public:
    void showBoyHeight2(Boy2& b);
    void showBoyHeight3(Boy2& b);
};


class Boy2 {
private:
    int money = 100;
    int height = 178;
    friend int saveMoney(Boy2& b, Girl2& g);
public:
    Boy2(int height) : height(height) {}
    friend void Girl2::showBoyHeight2(Boy2& b);
};

void Girl2::showBoyHeight2(Boy2& b) {
    cout << b.height << endl;
}
void Girl2::showBoyHeight3(Boy2& b) {
    // b.height 친구로 선언되지 않았기에 호출되지 않는다
}

int saveMoney(Boy2& b, Girl2& g) {
    return b.money + g.money;
}