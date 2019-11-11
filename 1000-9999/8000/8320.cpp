// 직사각형을 만드는 방법
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, sum = 0;
    cin >> n;
    for(int i = 1; i*i <= n; i-=-1){
        sum += n / i - i + 1;
    }
    cout << sum << '\n';
}
