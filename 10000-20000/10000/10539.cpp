// 수빈이와 수열
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int inp[101];
int arr[101];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n, max;
    cin >> n;
    for(int i = 0; i < n; i++)
        cin >> inp[i];

    arr[0] = inp[0];
    max = arr[0];
    for(int i = 1; i < n; i++){
        arr[i] = inp[i] * (i+1) - max;
        max += arr[i];
    }
    for(int i = 0; i < n; i++)
        cout << arr[i] << ' ';
}
