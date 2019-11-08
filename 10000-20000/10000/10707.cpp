// 수도요금
#include <bits/stdc++.h>
#define ll long long 
using namespace std;

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	int a, b, c, d, p, X, Y;
	cin >> a >> b >> c >> d >> p;
	X = a * p;
	if (p > c) 
		Y = b + (p - c) * d;
	else 
		Y = b;
	
	cout << (X > Y ? Y : X) << '\n';
