// 나무 자르기
#include<bits/stdc++.h>
#define ll long long
using namespace std;
vector<ll> tree;
ll result;
int m;

int bin(ll start, ll end){
	ll cut = 0;
	ll mid = (start + end) / 2;

	if(start > end) return result;

	for(ll i = 0; i < tree.size(); i++)
		if(tree[i] - mid < 0) break;
		else cut += tree[i] - mid;

	if(cut >= m)
		result = result < mid ? mid : result;

	if(cut > m)
		return bin(mid + 1, end);
	else
		return bin(start, mid - 1);
} 

int main(){
	int n;
	ll tmp;
	cin >> n >> m;
	for(int i = 0; i < n; i++){
		cin >> tmp;
		tree.push_back(tmp);
	} 

	sort(tree.rbegin(), tree.rend());
	cout << bin(0, tree[0]) << '\n';
} 
