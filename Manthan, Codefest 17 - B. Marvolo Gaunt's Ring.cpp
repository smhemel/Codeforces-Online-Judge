//
//  main.cpp
//  Manthan, Codefest 17 - B. Marvolo Gaunt's Ring
//
//  Created by S M HEMEL on 24/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define ll long long int
using namespace std;
ll arr[100011];
int main(){
    ios_base::sync_with_stdio(0);
    ll n,p,q,r,t;
    ll low = 11111111111;
    ll high = -11111111111;
    cin >> n >> p >> q >> r;
    for(ll i=0; i<n; i++){
        cin >> t;
        low = min(low,t);
        high = max(high,t);
    }
    ll ans = 0;
    if(p>=0) ans = (p*high);
    else ans = (p*low);
    if(q>=0) ans += (q*high);
    else ans += (q*low);
    if(r>=0) ans += (r*high);
    else ans += (r*low);
    cout << ans << endl;
    return 0;
}
