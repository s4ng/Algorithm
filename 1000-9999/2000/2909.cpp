// 캔디 구매
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k, n1, tmp;
    cin >> n >> k;
    tmp = pow(10, k);
    n1 = n % tmp;
    n1 >= pow(10, k)/2 ? n += (pow(10,k) - n1) : n -= n1;
    cout << n << '\n';
}
