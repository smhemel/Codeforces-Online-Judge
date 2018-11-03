//
//  main.cpp
//  Codeforces Round #511 (Div. 2) - B
//
//  Created by S M HEMEL on 21/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>
#include <vector>
#include <cstdio>
#include <set>
#define ll long long int
using namespace std;
int main() {
    ll a,b,n,ans = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a >> b;
        ans = max(ans,a+b);
    }
    cout << ans << endl;
    return 0;
}
