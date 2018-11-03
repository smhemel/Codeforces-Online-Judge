//
//  main.cpp
//  Codeforces Round #203 (Div. 2) - A. TL
//
//  Created by S M HEMEL on 3/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[111],b[111];
int main()
{
    int n,m,mx=0,mn=99999999,mn1=999999999;
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        int t;
        scanf ("%d", &t);
        mn = min(mn, t);
        mx = max(mx, t);
    }
    for(int i=0; i<m; i++) {
        int t;
        scanf ("%d", &t);
        mn1 = min(mn1, t);
    }
    int v = -1;
    v = mn << 1;
    while(v<mx)
        v++;
    if(v>=mn1)
    {
        v = -1;
    }
    cout << v << endl;
    return 0;
}
