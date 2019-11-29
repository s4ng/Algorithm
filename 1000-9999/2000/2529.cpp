// 부등호
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int k;
vector<int> maxNum, minNum;
string sign;

bool valid(vector<int> &v){
    for(int i = 0; i < sign.length(); i++){
        if(sign[i] == '<' && v[i] > v[i+1])
            return false;
        else if(sign[i] == '>' && v[i] < v[i+1])
            return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> k;
    for(int i = 0; i < k; i++){
        char tmp;
        cin >> tmp;
        sign += tmp;
    }

    for(int i = 9; i > 9 - (k + 1); i--)
        maxNum.push_back(i);

    while(1){
        if(valid(maxNum))
            break;
        prev_permutation(maxNum.begin(), maxNum.end());
    }

    for(int i = 0; i < (k + 1); i++)
        minNum.push_back(i);

    while(1){
        if(valid(minNum))
            break;
        next_permutation(minNum.begin(), minNum.end());
    }

    for(int i = 0; i < maxNum.size(); i++)
        cout << maxNum[i];
    cout << '\n';
    for(int i = 0; i < minNum.size(); i++)
        cout << minNum[i];
    cout << '\n';
}
