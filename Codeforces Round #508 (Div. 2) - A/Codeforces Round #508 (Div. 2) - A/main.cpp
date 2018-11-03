//
//  main.cpp
//  Codeforces Round #508 (Div. 2) - A
//
//  Created by S M HEMEL on 6/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <set>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#define ll long long int
using namespace std;
ll ar[211111];
map<char,int>M,M1;
vector<ll>v;
string s;
set<char>S;
int main() {
    int n,m;
    cin >> n >> m;
    cin >> s;
    for(int i=0; i<n; i++)
        M[s[i]]++;
    for(int i=0; i<n; i++){
        if(!M1[s[i]]){
               S.insert(s[i]);
               M1[s[i]] = 1;
        }
        if(S.size()==m) break;
    }
    if(S.size()<m){
        puts("0");
        return 0;
    }
    int ans = INT_MAX;
    for(auto c: S){
        ans = min(ans,M[c]);
    }
    cout << ans*(int)S.size() << endl;
    return 0;
}




