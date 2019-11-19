// Starman
#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<pair<int, string>> vp;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    vp.push_back(make_pair(1967, "DavidBowie"));
    vp.push_back(make_pair(1969, "SpaceOddity"));
    vp.push_back(make_pair(1970, "TheManWhoSoldTheWorld"));
    vp.push_back(make_pair(1971, "HunkyDory"));
    vp.push_back(make_pair(1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars"));
    vp.push_back(make_pair(1973, "AladdinSane"));
    vp.push_back(make_pair(1973, "PinUps"));
    vp.push_back(make_pair(1974, "DiamondDogs"));
    vp.push_back(make_pair(1975, "YoungAmericans"));
    vp.push_back(make_pair(1976, "StationToStation"));
    vp.push_back(make_pair(1977, "Low"));
    vp.push_back(make_pair(1977, "Heroes"));
    vp.push_back(make_pair(1979, "Lodger"));
    vp.push_back(make_pair(1980, "ScaryMonstersAndSuperCreeps"));
    vp.push_back(make_pair(1983, "LetsDance"));
    vp.push_back(make_pair(1984, "Tonight"));
    vp.push_back(make_pair(1987, "NeverLetMeDown"));
    vp.push_back(make_pair(1993, "BlackTieWhiteNoise"));
    vp.push_back(make_pair(1995, "1.Outside"));
    vp.push_back(make_pair(1997, "Earthling"));
    vp.push_back(make_pair(1999, "Hours"));
    vp.push_back(make_pair(2002, "Heathen"));
    vp.push_back(make_pair(2003, "Reality"));
    vp.push_back(make_pair(2013, "TheNextDay"));
    vp.push_back(make_pair(2016, "BlackStar"));
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int a, b, count = 0;
        cin >> a >> b;
        for(int j= 0; j < vp.size(); j++){
           if(vp[j].first >= a && vp[j].first <= b)
               count++;
           if(vp[j].first > b)
               break;
        }
        cout << count << '\n';
        if(count == 0)
            continue;
        for(int j = 0; j < vp.size(); j++){
            if(vp[j].first >= a && vp[j].first <= b)
                cout << vp[j].first << ' ' <<vp[j].second << '\n';
        }
    }
}
