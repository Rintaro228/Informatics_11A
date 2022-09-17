#include <bits/stdc++.h>

using namespace std;

long long a[30][30];

long long Solve(int n, int m) {
    if(a[n][m] == 0) {
        long long res = int(pow(2, (m + 1) * (n + 1))) - 1;
        for(int i = 0; i <= n; i++) {
            for(int j = 0; j <= m; j++) {
                if(i == n && j == m) 
                    continue;
                res -= Solve(i, j);          
            }
        }
        a[n][m] = res;
    }
    return a[n][m];
} 

int main() {
    int N, M;
    cin >> N >> M;
    a[0][0] = 1;
    cout << Solve(N-1, M-1);
}