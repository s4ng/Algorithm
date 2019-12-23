// 막대기
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int a, b, sum = 0;

    cin >> a;
    b = 0;

    for(int i = 64; i > 0; i /= 2){
        if(i > a)
            continue;
        else if(i == a){
            b = 1;
            break;
        }
        if(sum + i <= a) {
            sum += i;
            b++;
        }
    }
    cout << b << '\n';
}
