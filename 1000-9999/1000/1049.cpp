// 기타줄
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int p[51];
int a[51];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, price = 0;
    cin >> n >> m;
    for(int i = 0; i < m; i++)
        cin >> p[i] >> a[i];

    sort(p, p+m);
    sort(a, a+m);

    while (n > 0){
        if (n>=6 && p[0] < a[0] * 6){
            n -= 6;
            price += p[0];
        }
        else if (n<6 && p[0] < a[0]*n){
            price += p[0];
            n -= 6;
        }
        else{
            price += a[0] * n;
            n = 0;
        }
    }
    cout << price << '\n';
}
