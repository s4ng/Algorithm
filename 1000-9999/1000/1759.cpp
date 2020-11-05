// 암호 만들기
#include<bits/stdc++.h>
#define ll long long
using namespace std;
char alpha[16];
int l, c;

void dfs(int position, string str, int ja, int mo){
	if(str.size() == l){
		if(ja >= 2 && mo >= 1)
			cout << str << '\n';
		return;
	} 
	else{
		for(int i = position; i < c; i++){
			if(alpha[i] == 'a' || alpha[i] == 'e' || alpha[i] == 'i' 
					|| alpha[i] == 'o' || alpha[i] == 'u')
				dfs(i + 1, str + alpha[i], ja, mo + 1);
			else
				dfs(i + 1, str + alpha[i], ja + 1, mo);
		} 
	} 
} 

int main(){
	cin >> l >> c;
	for(int i = 0; i < c; i++)
		cin >> alpha[i];

	sort(alpha, alpha + c);

	dfs(0, "", 0, 0);
	return 0;
} 
