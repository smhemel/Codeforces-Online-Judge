//
//  main.cpp
//  Codeforces Round #319 (Div. 2) - A. Multiplication Table
//
//  Created by S M HEMEL on 21/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#define ll long long
using namespace std;
int main()
{
    ll n,m,cnt = 0;
    cin >> n >> m;
    ll Max = n*n;
    if(Max<m)
        return 0 * puts("0");
    if(n>=m)
        cnt++;
    for(ll i=2; ;i++){
        ll x = i*n;
        if(i==m && x<=Max){
            cnt++;
            continue;
        }
        if(x>Max)
            break;
        if(x<=Max && m%i==0 && x>=m){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
