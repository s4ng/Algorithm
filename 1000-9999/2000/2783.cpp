// 삼각 김밥
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    float x, y, n, x1, y1, sevP;
    cin >> x >> y >> n;
    sevP = x / y;
    for(int i = 0; i < n; i++){
        cin >> x1 >> y1;
        if(x1/ y1 < sevP)
            sevP = x1/ y1;
    }
    cout << fixed;
    cout.precision(2);
    cout << sevP * 1000 << '\n';
}
