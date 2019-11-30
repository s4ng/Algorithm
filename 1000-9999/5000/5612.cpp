// 터널의 입구와 출구
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, m, max = 0;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        m+=a;
        m-=b;
        if(m < 0){
            cout << 0 << '\n';
            return 0;
        }
        if(m > max)
            max = m;
    }
    cout << max << '\n';
}
