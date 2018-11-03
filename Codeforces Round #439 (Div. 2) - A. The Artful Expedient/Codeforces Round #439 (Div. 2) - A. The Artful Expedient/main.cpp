//
//  main.cpp
//  Codeforces Round #439 (Div. 2) - A. The Artful Expedient
//
//  Created by S M HEMEL on 20/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <map>
#include <set>
#define ll long long int
using namespace std;
ll a[2011];
ll b[2011];
set <ll> s;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],s.insert(a[i]),i++);
    for(int i=0; i<n; cin >> b[i],s.insert(b[i]),i++);
    int cnt = 0;
    for(int j=0; j<n; j++)
        for(int i=0; i<n; i++)
            if(s.count(a[j]^b[i]))
                cnt++;
    if(cnt&1)
        puts("Koyomi");
    else
        puts("Karen");
    return 0;
}
