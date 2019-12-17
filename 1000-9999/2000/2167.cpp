// 2차원 배열
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, k;
    cin >> n >> m;

    int value = 0;
    int dp[301][301] = {0};
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> value;
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1] + value;
        }
    }

    cin >> k;
    int sum = 0;
    int x1, x2, y1, y2;
    while(k--){
        cin >> y1 >> x1 >> y2 >> x2;

        sum = dp[y2][x2] - dp[y1-1][x2] - dp[y2][x1-1] + dp[y1-1][x1-1];
        cout << sum << '\n';
    }
}
