// 30
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int sum = 0;
    string s;
    cin >> s;
    sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        sum += s[i]-'0';
    }
    if(sum % 3 == 0 && s[0] == '0'){
        for(int i = s.size()-1; i >= 0; i--)
            cout << s[i];
        cout << '\n';
    }
    else
        cout << -1 << '\n';
}
