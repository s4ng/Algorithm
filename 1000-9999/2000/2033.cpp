// 반올림
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, x = 10;
    cin >> n;
    while(n > x){
        if(n % x != 0){
            n = (n / x + (n%x >= x/2 ? 1 : 0)) * x;
        }
        x *= 10;
    }
    cout << n << '\n';
}
