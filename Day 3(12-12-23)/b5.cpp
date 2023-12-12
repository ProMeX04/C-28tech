#include<bits/stdc++.h>
using namespace std;

struct Db {
    string code, name;
    int n;
    int hieuso;
    int point;
};
int main() {
    string tok;
    map<string, Db> db;
    for (int i = 0 ; i < 20; i++) {
        cin >> tok;
        string code, name;
        int n;
        int point;
        int hieuso;
        getline(cin >> ws, code);
        getline(cin >> ws, name);
        cin >> n >> hieuso >> point;
        cin >> tok;
        db[name] = {code, name, n, hieuso , point};
    }

    string match;
    while (getline(cin >> ws, match )) {
        string string1 = match.substr(0, match.find('-') - 1);
        string string2 = &match[match.find('-') + 2];

        stringstream ss(string2);
        string number;
        string result = "";
        int i;
        for (i = string1.length() - 1; i >= 0; i--) {
            if (isdigit(string1[i])) {
                number = string1[i] + number;
            }
            else break;
        }
        

        int d = 0;
        string tok;
        ss >> d;
        getline(ss >> ws, tok);

        int d1 = stoi(number);
        db[string1.substr(0, i)].point += (d1 > d) ? 3 : (d1 == d) ? 1 : 0;
        db[string1.substr(0, i)].n++;
        db[string1.substr(0, i)].hieuso += stoi(number) - d;

        db[tok].point += (d > d1) ? 3 : (d == d1) ? 1 : 0;
        db[tok].n++;
        db[tok].hieuso += d - stoi(number);
    }
    vector<pair<string, Db >> ve;

    for (auto x : db) {
        ve.push_back({x.first, x.second});
    }

    sort(ve.begin(), ve.end(), [](pair<string, Db> a, pair<string, Db> b) {
        if(a.second.point == b.second.point){
            if(a.second.hieuso == b.second.hieuso){
                return a.second.code > b.second.code;
            }
            return a.second.hieuso > b.second.hieuso;
        }
        return a.second.point > b.second. point;
    });
    for(int i = 0; i < 20 ;i ++) {
        cout << "#" << i +1 << " " << ve[i].second.code << " " << ve[i].second.name << " " << ve[i].second.n <<  " " << ve[i].second.hieuso << " " << ve[i].second.point << endl;
        cout << "------------------\n";
    }
}