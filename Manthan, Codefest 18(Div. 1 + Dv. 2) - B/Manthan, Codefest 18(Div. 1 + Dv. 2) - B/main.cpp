//
//  main.cpp
//  Manthan, Codefest 18(Div. 1 + Dv. 2) - B
//
//  Created by S M HEMEL on 2/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
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
ll ar[211111];
string s;
map<ll, ll>M;
vector<ll> v;
int main() {
    ll n , s,c = 0;
    cin >> n >> s;
    for(ll i=0; i<n; i++){
        cin >> ar[i];
        if(ar[i]>=s){
            c++;
            continue;
        }
        v.push_back(abs(s-ar[i]));
    }
    sort(v.begin(),v.end());
    ll ans = 0;
    ll mid = n/2+1;
    if(c>n)
    for(auto u: v){
        //cout << u << endl;
        c++;
        ans += u;
        if(c==mid) break;
    }
    cout << ans <<endl;
    return 0;
}
