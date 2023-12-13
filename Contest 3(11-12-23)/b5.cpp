#include<bits/stdc++.h>
using namespace std;

struct INVOICE {
    int id;
    double amount;

};
struct CUSTOMER {
    INVOICE iv;
    int id;
    string name;
    int discont;
};

int main() {
    string temp;
    int n; cin >> n ;
    CUSTOMER cs[n];
    for (int i = 0 ; i < n ; i++) {
        getline(cin >> ws, temp);
        cin >> temp >> temp >> temp >> cs[i].id;
        cin >> temp >> temp >> temp;
        getline(cin >> ws, cs[i].name);
        cin >> temp >> temp >> cs[i].discont;
        cin >> temp >> temp >> temp >> cs[i].iv.id;
        cin >> temp >> temp >> cs[i].iv.amount >> temp;
    }

    sort(cs, cs + n, [](CUSTOMER a, CUSTOMER b){
        double ma = a.iv.amount * (100 - a.discont);
        double mb = b.iv.amount * (100 - b.discont);

        if(ma == mb) return a.id < b.id;
        return ma > mb;
    });

    for(int i = 0 ; i < n ; i++){
        cout << "Customer ID : "<< cs[i].id << endl;
        cout << "Full Name : "<< cs[i].name << endl;
        cout << "Amount : " << fixed <<setprecision(2) << (cs[i].iv.amount * (100 - cs[i].discont))/100<<" $\n";
        cout << "--------------------\n";
    }
}