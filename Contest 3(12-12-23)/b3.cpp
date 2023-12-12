#include<bits/stdc++.h>
using namespace std;
int n;
int ei , ej;
int dx[] = {-1,-1,1,1,-2,-2,2,2};
int dy[] = {2,-2,2,-2,1,-1,1,-1};
int A[100][100];
bool visited[1000][1000];
int ok = false;

void dfs(int bi, int bj){
    if(bi == ei and bj == ej) {ok = true; return;} 
    visited[bi][bj] = true;
    for(int i = 0 ;i < 8 ;i++){
        if(bi + dx[i] < n and bi + dx[i] >= 0 and bj + dy[i] < n and bj + dy[i] >= 0){
            if(!visited[bi +dx[i]][bj + dy[i]] and A[bi +dx[i]][bj + dy[i]]){
                dfs(bi +dx[i],bj + dy[i]);
            }
        }
    }
}

int main(){
    int bi,bj;
    cin >> n >> bi >> bj >> ei >> ej;
    for(int i = 1; i <= n ;i ++){
        for(int j = 1 ; j <= n ; j ++){
            cin >> A[i][j];
        }
    }
    dfs(bi, bj);
    if(ok) cout << "YES";
    else cout <<"NO";
}