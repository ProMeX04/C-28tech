#include<iostream>
using namespace std;
int main(){
    long long n; cin >> n;
    long long A[n];
    long long mod[28] = {0};
    for(long long i =0  ;i < n ; i++){
        cin >> A[i];
        mod[A[i]%28]++;
    }
    long long result = mod[14] *(mod[14]-1)/2 +  mod[0] *(mod[0]-1)/ 2 ;
    for(long long i = 1 ; i < 14 ;i ++){
        result += mod[i] * mod[28 - i];
    }
    cout << result;
    
}