//
//  main.cpp
//  Codeforces Global Round 1 - B
//
//  Created by S M HEMEL on 7/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
#define ll long long int
using namespace std;
ll ar[211111];
vector<ll>v;
ll n,k,m,a,b,c;
ll Max = 0;
int main() {
    cin >> n >> m >> k;
    for(int i=0; i<n; i++){
        cin >> ar[i];
        if(i) v.push_back(ar[i]-ar[i-1]-1);
    }
    ll ans = n;
    sort(v.begin(),v.end());
    k = n-k;
    for(int i=0; i<k ; i++) ans += v[i];
    
    cout << ans << endl;
    return 0;
}
