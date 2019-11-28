// 컵홀더
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int N;
    cin >> N;

    string s;
    cin >> s;

    int cnt = 1;
    int L = 0;
    for (int i = 0; i < s.length(); i++)
        if (s[i] == 'S')
            cnt++;
        else{
            L++;
            if (L == 2){
                cnt++;
                L = 0;
            }
        }
    if (L == 1)
        cnt++;
    cout << min(cnt, N) << "\n";;
}
