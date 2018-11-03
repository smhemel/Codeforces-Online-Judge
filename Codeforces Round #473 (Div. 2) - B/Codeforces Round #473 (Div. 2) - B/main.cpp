//
//  main.cpp
//  Codeforces Round #473 (Div. 2) - B
//
//  Created by S M HEMEL on 3/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <cstdio>
#define ll long long int
using namespace std;
#define N 1111111
ll val[N],mval[N],fa[N],k,n,m,ans;
map<string,ll> M;
string s[N];
int main() {
    cin >> n >> k >> m;
    memset(mval,0x3f,sizeof(mval));
    for(ll i=1; i<=n; i++) cin >> s[i];
    for(ll i=1; i<=n; i++){
        cin >> val[i];
        M[s[i]] = i;
    }
    for(ll i=1,T,t; i<=k; i++){
        cin >> T;
        while(T--){
            cin >> t;
            fa[t] = i;
            if(mval[i]>val[t])
                mval[i] = val[t];
        }
    }
    while(m--){
        cin >> s[m];
        ans += mval[fa[M[s[m]]]];
    }
    cout << ans << endl;
    return 0;
}
