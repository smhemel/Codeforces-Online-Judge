//
//  main.cpp
//  Codeforces Round #468 (Div. 2) - A
//
//  Created by S M HEMEL on 4/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <set>
#include <map>
#define ll long long int
using namespace std;
ll w[1001];
int main() {
    for(int i=1; i<=1000; i++)
        w[i] = w[i-1]+i;
    ll n,m;
    cin >> n >> m;
    if(m<n)
        swap(n,m);
    ll ans = LONG_LONG_MAX;
    for(ll i=n; i<=m; i++){
        ans = min(ans,w[i-n]+w[m-i]);
    }
    cout << ans<< endl;
    return 0;
}
