#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , m ; cin >> n >> m;
    multiset<int> se;
    for(int i = 0 ; i < n ; i++){
        int x; cin >> x;
        se.insert(x);
    }
    for(int i = 0; i < m ; i++){
        int x; cin >> x;
        auto pos = se.upper_bound(x);
        if(pos == se.begin()) cout <<  -1 << endl;
        else{
            pos --;
            cout << * pos<< endl;
            se.erase (pos);
        }
    }
}