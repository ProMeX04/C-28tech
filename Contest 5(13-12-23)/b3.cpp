#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m;  cin >> n >> m;
    int A[n+1][m+1];
    for(int i = 1 ; i <= n; i ++){
        for(int j = 1 ; j <= m ; j ++){
            cin >> A[i][j];
        }   
    }

    vector<vector<long long>> dp(n+1, vector<long long>(m+1));

    for(int i = 1; i <= n ; i++){
        for(int j = 1 ; j <= m; j ++){
            dp[i][j] = max({dp[i-1][j-1], dp[i-1][j], dp[i][j-1]}) +A[i][j];
        }
    }
    cout << dp[n][m];

}