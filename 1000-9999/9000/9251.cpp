// LCS
#include <bits/stdc++.h>
using namespace std;
int arr[1001][1001] = {0};

int main(){
	int i, j;
	string s1, s2;
	cin >> s1 >> s2;
	for(i = 0; i < s1.size(); i++){
		for(j = 0; j < s2.size(); j++){
			if(s1[i] == s2[j]){
				arr[i+1][j+1] = arr[i][j] + 1;
			} else {
				arr[i+1][j+1] = max(arr[i][j+1], arr[i+1][j]);
			} 
		} 
	} 
	cout << arr[i][j] << '\n';
}
