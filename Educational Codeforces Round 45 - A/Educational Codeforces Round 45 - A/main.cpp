//
//  main.cpp
//  Educational Codeforces Round 45 - A
//
//  Created by S M HEMEL on 10/6/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <vector>
#include <map>
#define ll long long int
#include <utility>
using namespace std;
ll ar[211111];
string s;
int main(){
    ll n,m,a,b;
    cin >> n >> m >> a >> b;
    if(n==m) return 0 * puts("0");
    if(n>m){
        ll ans = n%m;
        ll x = (m-ans)*a;
        ll y = ans*b;
        cout << min(x,y) << endl;
        return 0;
    }
    else{
        ll x = n*b;
        ll y = (m-n)*a;
        cout << min(x,y) << endl;
        return 0;
    }
    return 0;
}
