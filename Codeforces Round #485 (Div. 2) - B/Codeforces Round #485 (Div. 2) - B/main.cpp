//
//  main.cpp
//  Codeforces Round #485 (Div. 2) - B
//
//  Created by S M HEMEL on 29/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <map>
#include <string>
#include <cstring>
#include <vector>
#include <utility>
#define ll long long int
#define eps 1e-10
using namespace std;
int main() {
    ll n,m;
    cin >> n >> m;
    if(n==m) return 0 * puts("=");
    double a = m*log(n);
    double b = n*log(m);
    if(fabs(a-b)<eps) puts("=");
    else if(a<b){
        puts("<");
    }
    else puts(">");
    return 0;
}
