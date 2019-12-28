// 뒤집힌 덧셈
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string sA, sB, result;
    int a, b, sum;
    cin >> sA >> sB;

    reverse(sA.begin(), sA.end());
    reverse(sB.begin(), sB.end());

    a = stoi(sA);
    b = stoi(sB);

    sum = a + b;
    result = to_string(sum);
    reverse(result.begin(), result.end());

    cout << stoi(result) << '\n';
}
