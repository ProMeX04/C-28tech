#include<iostream>
using namespace std;
int main() {
    long long n, k ; cin >> n >> k;
    int i = 2;
    int cnt = 0;
    int result = -1;
    while (i * i <= n) {
        while (n % i == 0) {
            n /= i;
            cnt ++;
            if (cnt == k) {
                result = i;
            }
        }
        i++;
    }
    if(n != 1 and cnt == k - 1){
        cout << n;
    }
    else {
        cout << result;
    }

}