// 약수
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[51];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;

    for(int i = 0; i < n; i++)
        cin >> a[i];

    sort(a, a + n);

    cout << a[0] * a[n - 1] << '\n';
}
