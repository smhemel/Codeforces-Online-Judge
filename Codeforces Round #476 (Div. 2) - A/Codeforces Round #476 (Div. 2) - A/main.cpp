//
//  main.cpp
//  Codeforces Round #476 (Div. 2) - A
//
//  Created by S M HEMEL on 25/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#define ll long long int
using namespace std;
int main() {
    ll n,k,s,p;
    cin >>k >> n >> s >> p;
    ll per = n/s + (n%s != 0);
    ll total = per*k;
    ll packs = total/p + (total%p !=0);
    cout << packs << endl;
    return 0;
}
