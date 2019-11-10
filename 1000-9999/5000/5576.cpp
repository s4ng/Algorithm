// 콘테스트
#include <bits/stdc++.h>
using namespace std;

int ar1[10];
int ar2[10];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for(int i = 0; i < 10; i++){
        cin >> ar1[i];
    }
    for(int i = 0; i < 10; i++){
        cin >> ar2[i];
    }
    sort(ar1, ar1+10);
    sort(ar2, ar2+10);
    cout << ar1[9]+ar1[8]+ar1[7] <<' '<< ar2[9]+ar2[8]+ar2[7] <<'\n';
    return 0;
}
