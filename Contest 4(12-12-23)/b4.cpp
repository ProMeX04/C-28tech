#include<bits/stdc++.h>
using namespace std;
int main(){   
    string match;
    map<string, int > mp;
    while(getline(cin >> ws,match )){
        string string1 = match.substr(0, match.find('-') - 1);
        string string2 = &match[match.find('-')+ 2];

        stringstream ss(string2);
        string number;
        string result = "";
        int i;
        for(i = string1.length()-1; i >= 0; i--){
            if(isdigit(string1[i])){
                number = string1[i] + number;
            }
            else break;
        }
        mp[string1.substr(0,i)] += stoi(number);

        int d = 0;
        string tok;
        ss >> d;
         getline(ss >> ws,tok);
        mp[tok] += d;
    }
    vector<pair<string, int >> ve;
    int k = 0;
    for(auto x: mp){
        k ++;
        ve.push_back({x.first,x.second});
    }

    sort(ve.begin(),ve.end(),[](pair<string,int> a, pair<string, int> b){
        return a.second > b.second;
    });
    for(auto x: ve) {
        cout << x.first << " " << x.second << endl;
    }

}