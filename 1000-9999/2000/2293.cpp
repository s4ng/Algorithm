// 동전 1
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int arr[101];
int dp[10001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 0; j <= k; j++){
            if(j >= arr[i]){
                dp[j] += dp[j - arr[i]];
            }
        }
    }
    cout << dp[k] << '\n';
}
