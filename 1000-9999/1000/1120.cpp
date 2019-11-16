// 문자열
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int dp[51];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string  a, b;
    int max = 0;
    cin >> a >> b;
    for(int i = 0; i <= b.size()-a.size(); i++){
        int count = 0;
        for(int j = 0; j < a.size(); j++){
            if(a[j] == b[j+i])
                count++;
        }
        dp[i] = count;
    }
    for(int i = 0; i < 51; i++){
        if(dp[i] > max)
            max = dp[i];
    }
    cout << a.size() - max << '\n';
}
