#include<iostream>
using namespace std;
int main(){
    int mod = 1e9 + 7;
    int n; cin >> n ;
    long long f0 = 1;
    long long f1 = 1;
    for(int i = 2 ;i <= n ; i++){
        long long temp = f1;
        f1= 3 * f0  + 2* f1;
        f1 %= mod;
        f0 = temp; 
    }
    cout << f0;
}