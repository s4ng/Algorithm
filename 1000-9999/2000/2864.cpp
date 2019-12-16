// 5와 6의 차이
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    int s1_size = s1.size();
    int s2_size = s2.size();

    for (int i = 0; i < s1_size; i++) {
        if (s1[i] == '6') s1[i] = '5';
    }
    for (int i = 0; i < s2_size; i++) {
        if (s2[i] == '6') s2[i] = '5';
    }
    cout << stoi(s1) + stoi(s2) << ' ';

    for (int i = 0; i < s1_size; i++) {
        if (s1[i] == '5') s1[i] = '6';
    }
    for (int i = 0; i < s2_size; i++) {
        if (s2[i] == '5') s2[i] = '6';
    }
    cout << stoi(s1) + stoi(s2);
}
