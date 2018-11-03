//
//  main.cpp
//  Codeforces Round #452 (Div. 2) - A
//
//  Created by S M HEMEL on 18/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int n,one=0,two=0,x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(x==1) one++;
        else two++;
    }
    ll ans = 0;
    ans = min(one,two)+((one-min(one,two))/3);
    cout << ans << endl;
    return 0;
}
