//
//  main.cpp
//  Codeforces Round #462 (Div. 2) - A
//
//  Created by S M HEMEL on 14/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <cstdio>
#include <string>
#include <vector>
#define ll long long int
using namespace std;
ll a[50],b[50];
vector<ll>v;
int main() {
    ll n,m,M = -1e18,ans = 1e18;
    cin >> n >> m;
    for(ll i=0; i<n; cin >> a[i],i++);
    for(ll i=0; i<m; cin >> b[i],i++);
    sort(a,a+n);
    sort(b,b+m);
    for(int i=0; i<n; i++){
        if(a[i]>=0) v.push_back(a[i]*b[m-1]);
        else{
            v.push_back(a[i]*b[0]);
        }
    }
    sort(v.begin(),v.end());
    cout << v[v.size()-2]<< endl;
    return 0;
}
