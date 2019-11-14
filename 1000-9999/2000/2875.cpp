// 대회 or 인턴
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, k, team;
    cin >> n >> m >> k;
    team = min((n+m-k)/3, n/2);
    team = min(team, m);
    cout << team << '\n';
}
