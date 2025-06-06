#include <iostream>
using namespace std;

class Account {
public:
    static float interestrate;

    static void setrate(float r) {
        interestrate = r;
    }

    static void displayrate() {
        cout << "Interest Rate: " << interestrate << endl;
    }
};
float Account::interestrate = 9.0;

int main() {
    Account::displayrate();     
    Account::setrate(6.5);
    Account::displayrate();
}

