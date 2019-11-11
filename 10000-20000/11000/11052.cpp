// 카드 구매하기
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int arr[1001];
int dp[1001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            dp[i] = max(dp[i], dp[i-j]+arr[j]);
        }
    }
    cout << dp[n] << '\n';
}
