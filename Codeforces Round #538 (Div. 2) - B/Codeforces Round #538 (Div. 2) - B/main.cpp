//
//  main.cpp
//  Codeforces Round #538 (Div. 2) - B
//
//  Created by S M HEMEL on 10/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll ar[211111];
map<ll,ll> M;
ll n,m,a,b,c,x,y,z;
int main() {
    
    ll n,m,k;
    cin >> n >> m >> k;
    vector<pair<ll,ll>> v;
    vector<bool> used(n,false);
    for(int i=0; i<n; i++){
        cin >> ar[i];
        v.emplace_back(ar[i],i);
    }
    sort(v.begin(),v.end());
    ll c = m*k;
    ll ans = 0;
    while(c--){
        used[v.back().second] = true;
        ans += v.back().first;
        v.pop_back();
    }
    cout << ans << endl;
    c = 0;
    ll temp = 0;
    for(ll i=0; i<n; i++){
        if(used[i]) c++;
        if(c==m && temp+1 < k){
            cout << i+1 << " ";
            c = 0;
            temp++;
        }
    }
    
    return 0;
}
