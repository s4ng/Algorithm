// 별찍기 13
#include<bits/stdc++.h>
using namespace std;

int main() {
	int a;
	cin >> a;
	for(int i = 1; i <= a; i++) {
		for(int j = 0; j < i; j++) {
			cout << '*';
		} 
		cout << '\n';
	} 
	for(int i = a - 1; i > 0; i--) {
		for(int j = 0; j < i; j++) {
			cout << '*';
		} 
		cout << '\n';
	} 
}
