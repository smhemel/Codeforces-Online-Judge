//
//  main.cpp
//  Codeforces Round #456 (Div. 2) - A
//
//  Created by S M HEMEL on 5/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
#include <vector>
//#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n,m,x,y,z;
    cin >> n >> m >> x >> y >> z;
    ll yellow = x*2LL + y*1LL;
    ll blue = y*1LL + z*3LL;
    yellow -= n;
    blue -= m;
    if(yellow>0 && blue>0)
        cout << yellow+blue << endl;
    else if(yellow>0)
        cout << yellow << endl;
    else if(blue>0)
        cout << blue << endl;
    else
        puts("0");
    return 0;
}









