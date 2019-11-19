// 신입 사원
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int q;
    cin >> q;
    while(q--){
        int n, max = 100001, count = 0;
        cin >> n;
        vector<pair<int, int>> vp;
        for(int i = 0; i < n; i++){
            int a, b;
            cin >>a >>b;
            vp.push_back(make_pair(a, b));
        }
        sort(vp.begin(), vp.end());
        for(int i = 0; i < n; i++){
            if(vp[i].second < max){
                max = vp[i].second;
                count++;
            }
        }
        cout << count <<'\n';
    }
}
