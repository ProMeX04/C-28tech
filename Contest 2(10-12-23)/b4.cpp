#include<bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t; getchar();
    while (t--) {
        string bt; getline(cin , bt);
        stringstream ss(bt);
        string tp;
        int p[10000] = {0};
        while (ss >> tp) {
            if (tp != "+") {
                int cs = 0;
                int i = 0;
                while (isdigit(tp[i])) {
                    cs = cs * 10 + tp[i] - '0';
                    i++;
                }

                while (not isdigit(tp[i])) i++;
                int ex = stoi (&tp[i]);
                p[ex] += cs;
            }
        }
        int found = false;
        for (int i = 0; i < 10000 ; i++) {
            if (p[i] != 0 ) {
                if (found == true) {
                    cout << " + ";
                }

                cout << p[i] << "x^" << i;
                found = true;
            }
        }
        cout << endl;

    }
}