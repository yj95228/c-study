#include <iostream>
#include "Boy&Girl.h"


using namespace std;

// Object Friend
int main02() {
    Boy b(178);
    Girl g;
    g.showBoyHeight(b);
    return 0;
}