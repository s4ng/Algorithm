// 파스칼
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, k = 1;
    cin >> n;
    for(int i = 2; i*i <= n; i++){
        if(n%i == 0){
            k = n/i;
            break;
        }
    }
    cout << n-k << '\n';
}
