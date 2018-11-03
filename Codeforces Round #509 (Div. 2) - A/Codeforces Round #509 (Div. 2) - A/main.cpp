//
//  main.cpp
//  Codeforces Round #509 (Div. 2) - A
//
//  Created by S M HEMEL on 16/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <string>
#include <cstring>
#define ll long long int
using namespace std;
vector<ll>v;
int main() {
    ll n,x;
    cin >> n;
    for(ll i=0; i<n; i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    ll ans = 0;
    for(int i=1; i<n; i++){
        ans += v[i]-v[i-1];
    }
    ans -= (n-1);
    if(ans<0) ans  = 0;
    cout << ans << endl;
    return 0;
}
