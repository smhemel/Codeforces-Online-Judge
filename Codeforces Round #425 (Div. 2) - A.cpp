//
//  main.cpp
//  Codeforces Round #425 (Div. 2) - A
//
//  Created by S M HEMEL on 24/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
#define ll unsigned long long int
using namespace std;
string s;
int main()
{
    ll n,m;
    cin >> n >> m;
    ll step = n/m;
    ll rem = n%m;
    if(step%2==1)
        return 0 * puts("YES");
    if(rem!=0)
        return 0 * puts("NO");
    puts("NO");
    return 0;
}
