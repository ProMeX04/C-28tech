#include<bits/stdc++.h>
using namespace std;
int main(){   
    map<string, int > mp;
    for(int i =0 ;i < 10;i++){
        string x;
        int kl; cin >> x >> kl;
        mp[x] =kl;
    }
    int n; cin >> n;
    for(int i = 0; i < n ;i ++){
        string s;
        cin >> s;
        string nt;
        int result = 0;
        for(int i = 0; i < s.length();i++){
            if(isdigit(s[i]) == 0) {
                nt +=s[i];
            }
            else{
                int number = 0;
                while(isdigit(s[i])){
                    number = number *10 + s[i] - '0';
                    i++;
                }
                result += number * mp[nt];
                nt = "";
                i -- ;
            }
        }
        cout << result << endl;
    }
}