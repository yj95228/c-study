#pragma once
using namespace std;

class Girl;
class Boy;

// Object Friend
class Boy {
private:
    int height;
    friend class Girl;
public:
    Boy(int height) : height(height) {};
    void showYourWeight(Girl& g) {
        // cout << g.weight << endl;
    }
};
class Girl {
private:
    int weight;
    // friend class Boy;
public:
    void showBoyHeight(Boy& b) {
        cout << "내 남자친구의 키는 " << b.height << endl;
    }
};