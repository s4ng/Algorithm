// N-Queen
#include<bits/stdc++.h>
#define ll long long
#define init ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int N, cnt = 0;
int col[16];

bool check(int dept){
	for(int i = 0; i < dept; i++)
		if(col[i] == col[dept] || abs(col[dept] - col[i]) == dept - i)
			return false;
	return true;
} 

int nQueen(int num){
	if(num == N)
		cnt++;
	else{
		for(int i = 0; i < N; i++){
			col[num] = i;
			if(check(num))
				nQueen(num+1);
		} 
	} 
	return 0;
} 

int main(){
	init
	cin >> N;
	nQueen(0);
	cout << cnt << '\n';
} 
