// 이동하기
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int Map[1001][1001];
int dp[1001][1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            cin >> Map[i][j];
        
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++){
            int result = 0;
            result = max(dp[i-1][j-1], max(dp[i-1][j], dp[i][j - 1]));
            dp[i][j] = result + Map[i][j];
        }
        
    cout << dp[n][m] << '\n';
}
