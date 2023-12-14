#include <iostream>
#include <string>

using namespace std;

class Soldier {
private:
    int power;
    int blood;
    string status;

public:
    Soldier(int power, int blood, string status) : power(power), blood(blood), status(move(status)) {}

    void fight(const string& event) {
        if (status == "ALIVE") {
            if (event == "mushroom") {
                blood -= 15;
                power -= 2;
            } else if (event == "pea") {
                blood += 10;
                power += 2;
            } else if (event == "soldier" || event == "witch") {
                int enemyPower; cin >> enemyPower;
                if (enemyPower >= power) {
                    status = "DEAD";
                    blood = 0;
                    power = 0;
                } else {
                    if (event == "soldier") {
                        blood += 5;
                        power += 7;
                    } else {
                        power += 5;
                    }
                }
            }
        }
    }

    void print() const {
        cout << "POWER : " << power << "\n";
        cout << "BLOOD : " << blood << "\n";
        cout << status << "\n";
        cout << "--------------------\n";
    }
};

int main() {
    int power, blood;
    string status;
    cin.ignore(8); cin >> power;
    cin.ignore(8); cin >> blood;
    cin >> status;
    Soldier soldier(power, blood, status);

    int eventCount; cin >> eventCount;
    for(int i = 0; i < eventCount; ++i) {
        string event; cin >> event;
        soldier.fight(event);
        soldier.print();
    }

    return 0;
}
