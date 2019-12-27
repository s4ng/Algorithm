// 유학금지
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    string a, b = "CAMBRIDGE", ans = "";
    cin >> a;
    for(int i = 0; i < a.size(); i++){
        bool isOverlap = false;
        for(int j = 0; j < b.size(); j++){
            if(a[i] == b[j]){
                isOverlap = true;
                break;
            }
        }
        if(!isOverlap){
            ans.push_back(a[i]);
        }
    }
    cout << ans << '\n';
}
