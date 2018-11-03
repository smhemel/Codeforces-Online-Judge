//
//  main.cpp
//  Divide by Zero 2018 and Codeforces Round #474 - B
//
//  Created by S M HEMEL on 7/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstdio>
#include <queue>
#define ll long long int
using namespace std;
ll a[11111],b[11111];
int main() {
    ll n,k1,k2;
    cin >> n >> k1 >> k2;
    for(ll i=0; i<n; i++)
        cin >> a[i];
    for(ll i=0; i<n; i++)
        cin >> b[i];
    priority_queue <ll> Q;
    for(int i=0; i<n; i++){
        Q.push(abs(a[i]-b[i]));
    }
    for(int i = 0; i < k1 + k2; i++) {
        ll p = Q.top();
        Q.pop();
        Q.push(abs(p - 1));
    }
    long long ans = 0;
    while(!Q.empty()) {
        long long p = Q.top();
        Q.pop();
        ans += p * p;
    }
    printf("%lld\n", ans);
    return 0;
}
