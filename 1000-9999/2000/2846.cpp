// 오르막길
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int n;
    int arr[1001];
    int max = 0, count = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 1; i < n; i++){
        arr[i - 1] < arr[i] ? count += arr[i] - arr[i - 1] : count = 0;

        if (max < count)
            max = count;
    }
    cout << max << '\n';
}
