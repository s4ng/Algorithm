// 심부름 가는 길
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int st[2][100001];
int dp[2][100001];

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a, b, c, d, time;
	cin >> a >> b >> c >> d;
	time = a + b + c + d;
	cout << time / 60 << '\n' << time % 60 << '\n';
}
