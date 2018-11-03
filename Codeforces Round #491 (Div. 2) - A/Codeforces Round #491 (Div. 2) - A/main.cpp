//
//  main.cpp
//  Codeforces Round #491 (Div. 2) - A
//
//  Created by S M HEMEL on 23/6/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
ll ar[211111];
string s;
int main() {
    ll a,b,c,n;
    cin >> a >> b >> c >> n;
    if(a<c || b<c) return 0 * puts("-1");
    if(n-(a+b-c)<1)
        puts("-1");
    else cout << n-(a+b-c) << endl;
    return 0;
}
