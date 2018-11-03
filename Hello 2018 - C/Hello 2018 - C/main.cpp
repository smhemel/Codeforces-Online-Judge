//
//  main.cpp
//  Hello 2018 - C
//
//  Created by S M HEMEL on 8/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
ll a[33],m,ans = 0;
int main()
{
    int n;
    scanf("%d%lld", &n, &m);
    for(int i=0; i<n; i++) scanf("%lld",&a[i]);
    for(int i=1; i<n; i++) a[i] = min(a[i],2*a[i-1]);
    for(int i=n-2; i>=0; i--) a[i] = min(a[i],a[i+1]);
    ll ANS = (ll)1e18 + 6;
    for(int i=n-1; i>=0; i--) {
        ans += a[i] * (m>>i);
        ANS = min(ANS, ans+a[i]);
        m %= (1LL<<i);
    }
    printf("%lld\n", min(ANS, ans));
    return 0;
}
