#include<iostream>
using namespace std;
int main(){
    long long n,d ; cin >> n >> d;
    long long A[n];
    for(auto &x: A )cin >> x;
    long long result = 0;
    for(long long i = 1; i < n ;i++){
        if(A[i] <= A[i - 1]){
            long long x = (A[i-1] - A[i])/ d + 1;
            A[i] = A[i] += x * d;
            result += x;
        }
    }
    cout << result;
}