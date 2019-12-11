// 저항
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    string colors[10] = {"black", "brown", "red", "orange", "yellow", "green", "blue", "violet", "grey", "white"};
    string a, b, c, answer = "";
    cin >> a >> b >> c;

    for(int i = 0; i < 10; i++){
        if(a == colors[i]){
            answer.push_back(i + 48);
            break;
        }
    }

    for(int i = 0; i < 10; i++){
        if(b == colors[i]){
            answer.push_back(i + 48);
            break;
        }
    }

    for(int i = 0; i < 10; i++){
        if(c == colors[i]){
            for(int j = 0; j < i; j++){
                answer.push_back('0');
            }
            break;
        }
    }

    cout << atoll(answer.c_str())<< '\n';
}
