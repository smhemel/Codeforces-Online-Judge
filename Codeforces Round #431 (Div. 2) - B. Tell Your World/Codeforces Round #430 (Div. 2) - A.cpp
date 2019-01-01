//
//  main.cpp
//  Codeforces Round #430 (Div. 2) - A
//
//  Created by S M HEMEL on 29/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//


#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <cstdio>
#define ll long long int
using namespace std;
int main()
{
    ll l,r,x,y,k;
    cin >> l >> r >> x >> y >> k;
    for(int i=x ; i<=y; i++){
        if(i*k>=l && i*k<=r)
            return 0 * puts("YES");
    }
    puts("NO");
    return 0;
}
