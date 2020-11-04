// 숫자 카드
#include<bits/stdc++.h>
#define ll long long
#define MAX 500000
using namespace std;
vector<int> answer;
int hand[MAX + 1];
int cards[MAX + 1];

bool binary_search(int start, int end, int num){
	int mid = (start + end) / 2;
	bool result;
	if(start > end)
		return false;
	else{
		if(hand[mid] < num){
			result = binary_search(mid + 1, end, num);
		} else if (hand[mid] > num){
			result = binary_search(start, mid - 1, num);
		} else{
			return true;
		} 
		return result;
	} 
}

int main(){
	int n;
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> hand[i];

	sort(hand, hand + n);

	int m;
	cin >> m;
	for(int i = 0; i < m ; i++){
		int tmp;
		cin >> tmp;
		cards[i] = tmp;
	}

	for(int i = 0; i < m; i++){
		if(binary_search(0, n-1, cards[i]))
			cout << "1 ";
		else
			cout << "0 ";
	} 
	cout << '\n';
} 
