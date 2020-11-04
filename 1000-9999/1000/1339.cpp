// 단어 수학
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<string> words;
int alpha[26];

int main(){
	int n, result = 0;
	cin >> n;
	for(int i = 0; i < n; i++){
		string str;
		cin >> str;
		words.push_back(str);
	} 

	for(int i = 0; i < words.size(); i++){
		int pow = 1;
		for(int j = words[i].size() - 1; j >= 0; j--){
			int val = words[i][j] - 'A';
			alpha[val] += pow;
			pow *= 10;
		} 
	} 

	sort(alpha, alpha + 26);
	int num = 9;
	for(int i = 25; i >= 0; i--){
		if(alpha[i] == 0) break;
		result += (alpha[i] * num);
		num--;
	} 

	cout << result << '\n';
} 
