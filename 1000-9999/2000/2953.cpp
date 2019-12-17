// 나는 요리사다
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a1, a2, a3, a4, sum = 0, index = -1;
    for(int i = 0; i < 5; i++){
        cin >> a1 >> a2 >> a3 >> a4;
        if(a1+a2+a3+a4 > sum){
            sum = a1 + a2 + a3 + a4;
            index = i+1;
        }
    }
    cout << index << ' ' << sum;
}
