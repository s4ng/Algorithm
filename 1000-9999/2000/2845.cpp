// 파티가 끝나고 난 뒤
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, arr[5];
    cin >> a >> b;
    for(int i = 0; i < 5; i++){
        int tmp;
        cin >> tmp;
        cout << tmp - a * b << ' ';
    }
}
