//
//  main.cpp
//  Codeforces Round #354 (Div. 2) - A. Nicholas and Permutation
//
//  Created by S M HEMEL on 2/26/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;
int a[111];
int main()
{
    int n;
    cin >> n;
    int mx = 0, mn = 0;
    for(int i=1; i<=n; i++)
    {
        cin >> a[i];
        if(a[i] == 1) mn = i;
        if(a[i] == n) mx = i;
    }
    if(mn>mx)
        swap(mx,mn);
    if(mn-1<n-mx)
        cout << n-mn << endl;
    else
        cout << mx-1 << endl;
    return 0;
    
}
