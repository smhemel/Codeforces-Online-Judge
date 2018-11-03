//
//  main.cpp
//  Codeforces Round #276 (Div. 2) - Valuable Resources
//
//  Created by S M HEMEL on 7/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int main()
{
    ll x,y,n,xmin = 9999999999,xmax = -99999999999,ymin = 9999999999,ymax = -99999999999;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        xmin = min(xmin,x);
        xmax = max(xmax,x);
        ymin = min(ymin,y);
        ymax = max(ymax,y);
    }
    ll ans = max(abs(xmin-xmax),abs(ymin-ymax));
    cout << ans*ans << endl;
    return 0;
}
