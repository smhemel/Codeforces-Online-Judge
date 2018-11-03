//
//  main.cpp
//  Codeforces Round #333 (Div. 2) - A. Two Bases
//
//  Created by S M HEMEL on 13/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
int main() {
    ll x, bx,ans=0,ans1=0,num,y,by;
    cin >> x >> bx;
    for(ll i=0; i<x; i++) {
        cin >> num;
        ans += num * pow(bx,(x-1-i));
    }
    cin >> y >> by;
    for(ll i=0; i<y; i++)  {
        cin >> num;
        ans1 += num * pow(by,(y-1-i));
    }
    if(ans<ans1) puts("<");
    else if(ans>ans1) puts(">");
    else puts("=");
    return 0;
}
