// 퇴사
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int dp[16];
int t[16];
int p[16];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, maxN = 0;
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> t[i] >> p[i];
        dp[i] = p[i];
    }

    for(int i = 2; i <= n; i++){
       for(int j = 1; j < i; j++){
           if(i-j >= t[j]){
               dp[i] = max(p[i]+dp[j] , dp[i]);
           }
       }
    }
    for(int i = 1; i <= n+1; i++) {
        if(i + t[i] <= n+1) {
            if (dp[i] > maxN)
                maxN = dp[i];
        }
    }
    cout << maxN << '\n';
}
