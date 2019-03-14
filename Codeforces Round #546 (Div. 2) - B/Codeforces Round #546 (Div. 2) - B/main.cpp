//
//  main.cpp
//  Codeforces Round #546 (Div. 2) - B
//
//  Created by S M HEMEL on 14/3/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll ar[211111],br[211111],cr[211111];
vector<pair<ll,ll>>v,v1;
map<ll,ll>M;
string s,s1;
ll a,b,c,x,y,z,n,m,k,d;
int main(){
    cin >> n >> k;
    ll ans = 0;
    if((n-k)<=abs(1-k)){
        ans = (n-k)+(n*3);
    }
    else {
        ans = (k-1)+(n*3);
    }
    cout << ans << endl;
    return 0;
}
