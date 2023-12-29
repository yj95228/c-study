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
        cout << "�� ����ģ���� Ű�� " << b.height << endl;
    }
};