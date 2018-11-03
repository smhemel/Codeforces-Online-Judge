//
//  main.cpp
//  Codeforces Round #422 (Div. 2) - A. I'm bored with life
//
//  Created by S M HEMEL on 7/3/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#define ll long long
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    if(n<m){
        ll ans = 1;
        for(int i=2; i<=n; i++)
            ans *= i;
        cout << ans << endl;
    }
    else{
        ll ans = 1;
        for(int i=2; i<=m; i++)
            ans *= i;
        cout << ans << endl;
    }
    return 0;
}









