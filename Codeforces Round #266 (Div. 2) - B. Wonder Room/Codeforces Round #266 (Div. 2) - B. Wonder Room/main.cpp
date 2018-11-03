//
//  main.cpp
//  Codeforces Round #266 (Div. 2) - B. Wonder Room
//
//  Created by S M HEMEL on 7/14/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#define ll long long int
using namespace std;
int main()
{
    ll n,a,b;
    ll ans = 99999999999999999;
    bool flag = false;
    cin >> n >> a >> b;
    if(a*b>= 6LL*n){
        printf("%lld\n%lld %lld\n",a*b,a,b);
        return 0;
    }
    ll m = n*6;
    if(a>b)
        if(a <= max(n,6LL) && b <= min(n,6LL))
            return 0 * printf("%lld\n%lld %lld\n",m,max(n,6LL),min(n,6LL));
    if(b>a)
        if(b <= max(n,6LL) && a <= min(n,6LL))
            return 0 * printf("%lld\n%lld %lld\n",m,min(n,6LL),max(n,6LL));
    if(b==6 || b==1)
        return 0 * printf("%lld\n%lld %lld\n",m,m/b,b);
    if(a==6 || a==1)
        return 0 * printf("%lld\n%lld %lld\n",m,a,m/a);
    ll x = 0,y = 0;
    if(a>b){
        swap(a,b);
        flag = true;
    }
    for(ll i=1; i<=m; i++){
        ll x1 = (m+i-1)/i;
        if(x1<i) break;
        ll y1 = max(i,a);
        x1 = max(x1,b);
        if(ans>x1*y1){
            ans = x1*y1;
            x = x1;
            y = y1;
        }
    }
    if(!flag) swap(x,y);
    printf("%lld\n%lld %lld\n",ans,x,y);
    return 0;
}
