//
//  main.cpp
//  Helvetic Coding Contest 2018 - C1. Encryption (easy)
//
//  Created by S M HEMEL on 14/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
ll ar[111111],Max = 0,sum=0;
int main() {
    ll n,p;
    cin >> n >> p;
    for(ll i=0; i<n; i++){
        cin >> ar[i];
        sum += ar[i];
    }
    ll temp = 0;
    for(ll i=0; i<n; i++){
        temp += ar[i];
        sum -= ar[i];
        ll ans = temp%p + sum%p;
        if(Max<ans) Max = ans;
    }
    cout << Max << endl;
    return 0;
}
