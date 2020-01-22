// 일곱 난쟁이
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[9];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int sum = 0, x, y;
    bool isRight = false;
    for(int i = 0; i < 9; i++){
        cin >> a[i];
        sum += a[i];
    }

    sort(a, a+9);

    for(int i = 0; i < 9; i++){
        for(int j = 0; j < 9; j++){
            if(i != j){
                if(sum - a[i] - a[j] == 100){
                    x = i;
                    y = j;
                    isRight = true;
                }
            }
        }
        if(isRight == true)
            break;
    }

    for(int i = 0; i < 9; i++){
        if(i == x || i == y)
            continue;
        cout << a[i] << '\n';
    }
}
