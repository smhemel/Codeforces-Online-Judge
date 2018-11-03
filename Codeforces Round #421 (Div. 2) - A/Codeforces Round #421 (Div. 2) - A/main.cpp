//
//  main.cpp
//  Codeforces Round #421 (Div. 2) - A
//
//  Created by S M HEMEL on 6/27/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#define ll long long
using namespace std;
int main()
{
    ll a,b,c,d,e;
    scanf("%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e);
    ll answer = 0,increase=1;
    ll n = b;
    while(true){
        answer++;
        a -= n;
        n = b + (increase*d);
        if(c<n)
            n = c;
        if(a<=0)
            break;
        a += e;
        increase++;
    }
    printf("%lld\n",answer);
    return 0;
}
