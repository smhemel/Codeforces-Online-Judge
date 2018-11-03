//
//  main.cpp
//  Codeforces Round #492 (Div. 2) - A
//
//  Created by S M HEMEL on 24/6/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
map<ll,ll>M;
ll ar[211111];
string s;
int main() {
    ll n;
    cin >> n;
    ll cnt = 0;
    cnt += n/100;
    n = n%100;
    cnt += n/20;
    n = n%20;
    cnt += n/10;
    n =  n%10;
    cnt += n/5;
    n =  n%5;
    cnt += n;
    cout << cnt << endl;
    return 0;
}
