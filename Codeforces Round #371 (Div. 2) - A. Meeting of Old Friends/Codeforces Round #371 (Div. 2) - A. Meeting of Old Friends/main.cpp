//
//  main.cpp
//  Codeforces Round #371 (Div. 2) - A. Meeting of Old Friends
//
//  Created by S M HEMEL on 4/28/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c,d,k,cnt=0;
    cin >> a >> b >> c >> d >> k;
    ll l, r;
    l = max(a,c);
    r = min(b,d);
    cnt = r-l+1;
    if(k>=l && k<=r)
        cnt--;
    cnt = max(cnt, 0LL);
    cout << cnt << endl;
    return 0;
}
