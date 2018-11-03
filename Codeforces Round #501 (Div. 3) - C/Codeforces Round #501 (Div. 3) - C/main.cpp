//
//  main.cpp
//  Codeforces Round #501 (Div. 3) - C
//
//  Created by S M HEMEL on 24/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#define ll long long int
using namespace std;
ll dis[211111];
int main() {
    ll n,m,x,y,sum = 0,sum1=0;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> x >> y;
        sum1 += y;
        sum += x;
        dis[i] = abs(x-y);
    }
    if(sum1>m) return 0 * puts("-1");
    ll c = 0;
    sort(dis,dis+n,greater<int>());
    for(int i=0; i<n; i++){
        if(m<sum) c++;
        sum -= dis[i];
        
    }
    cout << c << endl;
    return 0;
}
