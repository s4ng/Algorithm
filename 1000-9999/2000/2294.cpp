// 동전 2
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k, a[101], dp[100001];
    cin >> n >> k;

    for(int i = 1; i <= n; i++)
        cin >> a[i];

    for(int i = 1; i <= k; i++)
        dp[i] = 100001;
    dp[0] = 0;

    for(int i = 1; i <= n; i++){
        for(int j = a[i]; j <= k; j++){
            dp[j] = min(dp[j], dp[j - a[i]] + 1);
        }
    }
    if(dp[k] == 100001)
        dp[k] = -1;

    cout << dp[k] << '\n';
}
