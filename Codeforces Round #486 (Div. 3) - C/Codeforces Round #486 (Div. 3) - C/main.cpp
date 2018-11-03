//
//  main.cpp
//  Codeforces Round #486 (Div. 3) - C
//
//  Created by S M HEMEL on 1/6/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>
#include <string>
#include <set>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
vector<int> v[200010];
map<int,vector<pair<int,int > > > M;
int main(){
    int k,n,cnt;
    cin >> k;
    for (int i = 0; i < k; ++i) {
        cin >> n;
        cnt = 0;
        for (int j = 0; j < n; ++j) {
            int x; cin >> x;
            cnt += x;
            v[i].push_back(x);
        }
        set<int> st;
        for (int j = 0;j < n; ++j) {
            int s2 = cnt - v[i][j];
            if(st.count(s2)) continue;
            st.insert(s2);
            M[s2].push_back({i,j});
        }
    }
    for(auto p: M) {
        if(p.second.size() >= 2) {
            cout << "YES\n";
            cout << p.second[0].first + 1<< " " << p.second[0].second + 1<< "\n";
            cout << p.second[1].first + 1<< " " << p.second[1].second + 1 << "\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}
