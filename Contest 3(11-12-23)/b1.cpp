#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n , x; cin >> n >> x;
    int cnt = 0;
    for(long long i = 1 ;i <= n; i++){
        if(x % i == 0){
            if( x / i <= n)
                cnt ++;
        }
    }
    // if(int(sqrt(x)) * int(sqrt(x)) == x and sqrt(x) <= n){cnt -- ;};
    cout << cnt;
}