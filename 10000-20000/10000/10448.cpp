// 유레카 이론
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int samgak[51];
int ans[4000];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    for (int i = 1; i <= 45; i++)
        samgak[i] = i*(i + 1) / 2;

    for (int i = 1; i <= 45; i++)
        for (int j = 1; j <= 45; j++)
            for (int k = 1; k <= 45; k++)
                ans[ samgak[i] + samgak[j] + samgak[k] ] = 1;

    int tCase, n;

    cin >> tCase;

    while (tCase--){
        cin >> n;

        if (ans[n] == 1)
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
}
