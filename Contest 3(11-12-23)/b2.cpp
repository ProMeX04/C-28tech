#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    int A[n];
    int sum[n + 1] = {0};
    map<long long, int> mp;
    int ok = false;
    int rs = 0;
    int l = 0, r = -1;
    mp[0] = 0;
    for (int i = 0; i < n ; i++) {
        cin >> A[i];
        if(A[i] == 0) ok = true;
        sum[i + 1] = sum[i] + A[i];
        if (mp[sum[i + 1]] == 0 and sum[i+1] != 0) {
            mp[sum[i + 1]] = i + 1;
        }
        else {
            if (i - mp[sum[i + 1]] > rs) {
                rs = i - mp[sum[i + 1]];
                r = i;
                l = mp[sum[i + 1]];
            }
        }
    }

    int k = false;
    for (int i = l; i <= r  ; i++) {
        k = true;
        cout << A[i] << " ";
    }
    if(k == false){
        if(r == -1 and ok != true) cout << "NOT FOUND";
        else {
            cout <<0;
        }
    }
   


}