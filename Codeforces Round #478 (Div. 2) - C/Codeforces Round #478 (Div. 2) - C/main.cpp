//
//  main.cpp
//  Codeforces Round #478 (Div. 2) - C
//
//  Created by S M HEMEL on 1/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#define ll long long int
using namespace std;
ll N,Q;
ll a[211111];
ll cnt;
int main() {
    int n, q, mn, mx, mid, i, ans;
    ll x, sum;
    scanf("%d %d", &n, &q);
    for(i=1; i<=n; i++) {
        scanf("%lld", &a[i]);
        a[i] += a[i-1];
    }
    sum = 0;
    while(q --) {
        scanf("%lld", &x);
        sum += x;
        mn = 1;
        mx = n;
        while(mn < mx) {
            mid = (mn + mx)/2;
            if(mid == mn) mid++;
            if(a[mid] > sum) mx = mid - 1;
            else mn = mid;
        }
        if(a[mn] <= sum) ans = n - mn;
        else ans = n;
        if(!ans) ans = n;
        printf("%d\n", ans);
        if(mn == n) sum = 0;
    }
    return 0;
}
