// 유니크
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[4][201];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[j][i];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < n; j++){
            bool isSame = false;
            for(int k = 0; k < n; k++){
                if(j != k && a[i][j] == a[i][k]){
                    isSame = true;
                    break;
                }
            }
            if(!isSame){
                a[3][j] += a[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout << a[3][i] << '\n';
    }
}
