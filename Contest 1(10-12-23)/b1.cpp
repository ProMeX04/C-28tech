#include<iostream>
using namespace std;
int main(){
    long long n; cin >> n;
    long long i = 2;
    long long max = 0;
    long long k = 0;
    while(i * i <= n ){
        if(n%i == 0){
            long long cnt  =0;
            while(n % i ==0){
                n /= i;
                cnt ++;
            }
            if(cnt > max) {
                max = cnt;
                k = i;
            }
        }
        i++;
    }
    if(n != 1){
        if (max == 0){
            max = 1;
            k = n;
        }
    }
    cout << k << " " << max; 
}