//
//  main.cpp
//  VK Cup 2018 - Wild-card Round 1 - A. 2-3-numbers
//
//  Created by S M HEMEL on 18/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
int main() {
    ll l,r,cnt = 0;
    cin >> l >> r;
    for (ll x = 1; x <= r; x *= 2)
        for (ll y = 1; x * y <= r; y *= 3)
            if(x*y >=l) cnt++;
    cout << cnt << endl;
    return 0;
}
