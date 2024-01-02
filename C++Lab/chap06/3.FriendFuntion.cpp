#include <iostream>
#include "Boy&Girl2.h"


using namespace std;

int main03() {
    Boy2 b(178);
    Girl2 g;
    g.showBoyHeight2(b);
    // g.showBoyHeight3(b);

    cout << saveMoney(b, g) << endl;
    return 0;
}