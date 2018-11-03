//
//  main.cpp
//  Codeforces Round #339 (Div. 2) - A.Link/Cut Tree
//
//  Created by S M HEMEL on 29/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstdio>
#define ll long long int
using namespace std;
int main(){
    ll l,r,k;
    bool f = true;
    cin >> l >> r >> k;
    for(int i=0; i<60; i++){
        ll ans = pow(k,i);
        if(ans>=l && ans<=r){
            f = false;
            cout << ans << endl;
        }
    }
    if(f) puts("-1");
    return 0;
}
