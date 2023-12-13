#include<bits/stdc++.h>
using namespace std;

class sodier {
public:
    int blood , power;
    string status;
};

void print(sodier sd) {
    cout << "POWER : " << sd.power << endl;
    cout << "BLOOD : " << sd.blood << endl;
    cout << sd. status << endl;
    cout <<  "--------------------\n";

}
int main() {
    sodier sd;
    string temp ;
    int x;
    cin >> temp >> temp >> sd.power;
    cin >> temp >> temp >> sd.blood;
    cin >> sd.status;
    int n; cin >> n;
    for (int i = 0 ; i < n ; i ++) {
        string s;
        cin >> s;

        if (sd.status == "ALIVE") {
            if (s == "mushroom") {
                sd.blood -= 15;
                sd.power -= 2;

            }
            else if (s == "pea") {
                sd.blood += 10;
                sd.power += 2;
            }
            else if ( s == "soldier" ) {
                int t; cin >> t;

                if (t  >= sd. power) {
                    sd.status = "DEAD";
                    sd.blood = 0;
                    sd.power = 0;
                }
                else {
                    sd.blood += 5;
                    sd.power += 7;
                }
            }
            else if (s == "witch") {
                int t; cin >> t;
                if (t >= sd. power) {
                    sd.status = "DEAD";
                    sd.blood = 0;
                    sd.power = 0;
                }
                else {
                    sd.power += 5;
                }
            }
        }

        print(sd);
    }
}