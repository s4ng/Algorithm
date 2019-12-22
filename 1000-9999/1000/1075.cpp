// 나누기
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, i;
    cin >> a >> b;

    a -= a % 100;

    for(i = 0; i < 100; i++){
        if((a + i) % b == 0)
            break;
    }

    if(i < 10)
        cout << 0 << i << '\n';
    else
        cout << i << '\n';
}
