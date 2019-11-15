// 크로스워드 만들기
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string a, b;
    cin >> a >> b;
    int x = 0, y = 0;
    for(int i = 0; i < a.size(); i++){
        bool searching = true;
        for(int j = 0; j < b.size(); j++){
            if(a[i] == b[j]) {
                x = j;
                y = i;
                searching = false;
                break;
            }
        }
        if(!searching)
            break;
    }
    for(int i = 0; i < b.size(); i++){
        for(int j = 0; j < a.size(); j++){
            if(j == y && i != x) {
                cout << b[i];
            }
            else if (i == x) {
                cout << a[j];
            } else {
                cout << '.';
            }

        }
            cout << '\n';
    }
}
