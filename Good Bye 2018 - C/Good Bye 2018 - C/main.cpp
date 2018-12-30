//
//  main.cpp
//  Good Bye 2018 - C
//
//  Created by S M HEMEL on 30/12/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
#include <set>
#define LL long long
using namespace std;

LL get(LL n, LL d) {
    LL k = n/d;
    LL a = 1;
    LL l = n-d+1;
    return (k*(a+l))/2;
}

int main()
{
    int n;
    cin >> n;
    vector<int> div;
    for (int i=1; i*i<=n; i++) {
        if (n%i)    continue;
        div.push_back(i);
        if (i*i!=n) div.push_back(n/i);
    }
    
    set<LL> ans;
    for (int x: div) ans.insert(get(n, x));
    
    for (LL x: ans) cout<< x <<" ";
    return 0;
}
