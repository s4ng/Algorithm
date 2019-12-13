// 이진수
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int q, n;
    cin >> q;
    while(q--){
        cin >> n;
        for(int i = 0; i < 30; i++){
            if(n&(1 << i)){
                cout << i << ' ';
            }
        }
    }
    return 0;
}
