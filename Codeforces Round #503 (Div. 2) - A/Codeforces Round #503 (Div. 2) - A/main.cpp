//
//  main.cpp
//  Codeforces Round #503 (Div. 2) - A
//
//  Created by S M HEMEL on 21/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;
int main() {
    ll n,m,k,a,b,x1,x2,x3,x4;
    cin >> n >> m >> a >> b >> k;
    while(k--){
        cin >> x1 >> x2 >> x3 >> x4;
        if(x1==x3) cout << abs(x2-x4) << endl;
        else{
            ll ans = 0;
            if(x2>=a && x2<=b) ans += abs(x1-x3)+abs(x2-x4);
            else if(x2>b) ans += abs(x2-b)+abs(x1-x3)+abs(b-x4);
            else ans += abs(x2-a)+abs(x1-x3)+abs(a-x4);
            cout << ans << endl;
        }
    }
    return 0;
}
