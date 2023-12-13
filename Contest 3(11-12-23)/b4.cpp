#include<bits/stdc++.h>
using namespace std;
int main(){   
    string s;
    cin >> s;
    s += 'a';
    int n = s.length();
    string number = "";
    string max_number = "0";
    for(int i = 0 ; i < n ; i++){
        if(isdigit(s[i])){
            number += s[i];
        }
        else{
            int i= 0 ;
            while(number[i] == '0' and i < number.length() - 1) i++;
            number = &number[i];
            if(number.length() == max_number.length()){
                if(number > max_number){
                    max_number = &number[0];
                }
            }
            else if(number.length() > max_number.length()){
                max_number = &number[0];
            }
            number = "";
        }
    }
    cout << max_number;
}