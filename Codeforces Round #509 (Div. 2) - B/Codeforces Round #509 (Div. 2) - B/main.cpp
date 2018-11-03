//
//  main.cpp
//  Codeforces Round #509 (Div. 2) - B
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
map<ll,int>M;
vector<ll>v;
int main() {
    ll a,b,x,y,ans = 0;
    cin >> a >> b >> x >> y;
    ll gcd = __gcd(x,y);
    x/=gcd,y/=gcd;
    ans = min(a/x,b/y);
    cout << ans << endl;
    return 0;
}
