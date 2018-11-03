//
//  main.cpp
//  Codeforces Round #492 (Div. 2) - B
//
//  Created by S M HEMEL on 24/6/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
ll ar[211111];
string s;
int main() {
    ll n;
    cin >> n;
    ll res = 1<<30;
    ll min_pos = -1;
    for(ll i=0; i<n; i++){
        ll x;
        cin >> x;
        x -= i;
        x = max(x,0LL);
        ll t = ((x+n-1LL)/n)*n+i;
        if(t<res){
            res = t;
            min_pos = i;
        }
    }
    cout << min_pos+1 << endl;
    return 0;
}
