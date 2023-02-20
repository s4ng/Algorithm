#include<bits/stdc++.h>
using namespace std;

int n;
int ring[101];

int gcd(int a, int b) {
	int c;
	while(b != 0) {
		c = a % b;
		a = b;
		b = c;
	} 
	return a;
} 

int main() {

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> ring[i];
	} 

	int m = ring[1];
	for(int i = 2; i <= n; i++) {
		int g = gcd(m, ring[i]);
		cout << m/g << '/' << ring[i]/g << '\n';
	} 
}
