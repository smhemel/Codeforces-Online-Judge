//
//  main.cpp
//  Educational Codeforces Round 48 - A
//
//  Created by S M HEMEL on 3/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>
#include <set>
#include <vector>
#define ll long long int
using namespace std;
//map<>M;
ll ar[211111];
string s;
int main() {
    ll n,m,x;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        ll ans = 0;
        cin >> x;
        if(m>=x){
            cout << "0 ";
        }
        else{
            ans = x/m;
            cout << ans << " ";
        }
    }
    return 0;
}





