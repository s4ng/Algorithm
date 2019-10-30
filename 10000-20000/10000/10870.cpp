//피보나치 수 5
#include <bits/stdc++.h>
using namespace std;

int fivo(int a) {
	if (a == 0) return 0;
	if (a == 1) return 1;
	return fivo(a -1) + fivo(a - 2);

}
int main() {
	int n; 
	cin >> n;
	cout << fivo(n) << '\n';
	return 0;
}