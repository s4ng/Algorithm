// 연속합
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int dp[100001];
int arr[100001];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, max = -1001;
    cin >> n;
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    for(int i = 1; i <= n; i++){
        if(dp[i-1] + arr[i] > arr[i])
            dp[i] = dp[i-1] + arr[i];
        else
            dp[i] = arr[i];
    }
    for(int i = 1; i <= n; i++){
        if(dp[i] > max)
            max = dp[i];
    }
    cout << max << '\n';
}
