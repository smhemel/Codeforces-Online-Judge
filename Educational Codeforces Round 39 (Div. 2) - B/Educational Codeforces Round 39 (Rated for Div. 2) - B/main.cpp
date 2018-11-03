//
//  main.cpp
//  Educational Codeforces Round 39 (Rated for Div. 2) - B
//
//  Created by S M HEMEL on 6/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <vector>
#define ll long long int
using namespace std;
int main() {
    ll a,b;
    cin >> a >> b;
    ll t = 0;
    if(a>=b*2){
        t = a%(2*b);
        a = t;
    }
    else if(b>=a*2){
        t = b%(2*a);
        b = t;
    }
    while (true) {
        if(a<2*b && b<2*a)
            return 0 * printf("%lld %lld\n",a,b);
        if(a==0 || b==0)
            return 0 * printf("%lld %lld\n",a,b);
        if(a>=2*b){
            a = a%(2*b);
            continue;
        }
        if(b>=a*2){
            b = b%(a*2);
        }
    }
    return 0;
}

