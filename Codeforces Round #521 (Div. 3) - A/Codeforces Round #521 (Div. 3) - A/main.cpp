//
//  main.cpp
//  Codeforces Round #521 (Div. 3) - A
//
//  Created by S M HEMEL on 16/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//


#include <iostream>
#define ll long long int
using namespace std;
int main(int argc, const char * argv[]) {
    ll test,n,a,b;
    cin >> test;
    while (test--) {
        cin >> a >> b >> n;
        ll ans = (a*(n/2))+(a*(n%2));
        ans -= (b*(n/2));
        cout << ans << endl;
    }
    return 0;
}





























