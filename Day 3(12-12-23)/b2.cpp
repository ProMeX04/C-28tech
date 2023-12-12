#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, m; cin >> n >> m;
    long long A[n];
    for(int i = 0; i < n ; i++){
        cin >> A[i];
    }
    sort(A,A+n);
    int i = 0;
    int p = n - 1;
    long long result = 0;
    for(int i = 0 ; i < n and i < p ;i ++){
        int p = lower_bound(A, A + n, m - A[i]) - A - 1;
        if(i < p){
            result += p - i ;
        }
    }
    cout << result ;
    
}