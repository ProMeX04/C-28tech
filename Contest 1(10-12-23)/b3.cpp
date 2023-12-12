#include<bits/stdc++.h>
using namespace std;
long long A[1000][1000];
long long n, m;
long long dx[] = { -1, 1, 0, 0};
long long dy[] = {0, 0, -1, 1};
bool visited[100][100] = {0};
long long result = 0;

void search(long long s, long long e) {
    visited[s][e] = 1;
    int count = 4;
    for (long long i = 0; i < 4 ; i++) {
        if (s + dx[i] < n and e + dy[i] < m and s + dx[i] >= 0 and e + dy[i] >= 0 and A[s + dx[i]][e + dy[i]]) {
            count --;
            if (!visited[s + dx[i]][e + dy[i]]) {
                search(s + dx[i] , e + dy[i]);
            }
        }
    }
    result += count;

}

int main() {
    cin >> n >> m;
    for (long long i = 0; i < n ; i++) {
        for (long long j = 0 ; j < m ; j++) {
            cin >> A[i][j];
        }
    }

    for (long long i = 0; i < n ; i++) {
        for (long long j = 0 ; j < m ; j++) {
            if (A[i][j] and !visited[i][j]) {
                result = 0;
                search(i , j);
                cout << result << " ";
            }
        }
    }
}