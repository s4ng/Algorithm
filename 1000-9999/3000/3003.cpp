// 킹, 퀸, 룩, 비숍, 나이트, 폰
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int k, q, r, v, n, p;
    cin >> k >> q >> r >> v >> n >> p;
    cout << 1 - k << ' ' << 1 - q << ' ' << 2 - r << ' ' << 2 - v
    << ' ' << 2 - n << ' ' << 8 - p << '\n';
}
