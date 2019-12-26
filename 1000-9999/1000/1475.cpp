// 방 번호
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string a;
    cin >> a;

    int arr[10] = {0};

    for(int i = 0; i < a.size(); i++){
        arr[a[i] - '0']++;
    }
    int num = 0;
    for(int i = 0; i < 10; i++){
        if(i != 9 && i != 6) num = max(num, arr[i]);
    }

    cout << max(num, (arr[6] + arr[9] + 1) / 2) << '\n';
}
