//
//  main.cpp
//  Codeforces Round #478 (Div. 2) - B
//
//  Created by S M HEMEL on 1/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll a[11111],b[11111];
int main() {
    int n = 14;
    ll ans = 0;
    for(int i=1; i<=n; cin >> a[i],i++);
    for(int i=1; i<=n; i++)
    {
        ll cnt = 0;
        for(int i=1; i<=n; i++){
            b[i] = a[i];
        }
        ll t = b[i]/n;
        ll more = b[i]-t*n;
        b[i] = 0;
        for(int j=1; j<=n; j++) b[j] += t;
        for(int j=i+1; more && j<=n; j++) {
            b[j]++;
            more--;
        }
        for(int j=1; more&& j<i; j++){
            b[j]++;
            more--;
        }
        for(int i=1; i<=n; i++)
            cnt += (b[i]%2==0)*b[i];
        ans = max(cnt, ans);
    }
    cout << ans << endl;
    return 0;
}
