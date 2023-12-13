#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int V[101] = {0};
    int A[n][n];
    for (int i = 0 ; i < n ; i++) {
        for (int j = 0 ; j < n ; j ++) {
            cin >> A[i][j];
            if (V[A[i][j]] == i) {V[A[i][j]] = i + 1;}
        }
    }
    bool found = 0;
    for(int i =0 ; i < 101; i++){
        if(V[i] == n ) {
            cout << i << " ";
            found = true;
        }
    }
    if (not found) cout << "NOT FOUND";
}