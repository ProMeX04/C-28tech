#include<bits/stdc++.h>
using namespace std;

int main(){   
    long long n , m ,k;
    cin >> n >> m >> k;
    long long x = 1;
    for(int i = 1; i <= m ;i++){
        x *= n;
        x %= int(pow(10,k));
    }
    cout << x;
}