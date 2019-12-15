// 디지털 루트
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    stack<int> s;
    string str;

    while (1){
        cin >> str;

        if (str.at(0) == '0')
            return 0;

        while (!str.empty()){
            if (str.size() == 1)
                break;
            int a = str.back() - 48;
            str.pop_back();
            int b = str.back() - 48;
            str.pop_back();

            int c = a + b;
            if (c >= 10){
                a = c % 10;
                b = c / 10;
                c = a + b;
            }
            str.push_back(c + 48);
        }

        cout << str << endl;
    }
}
