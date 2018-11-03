//
//  main.cpp
//  Codeforces Round #396 (Div. 2) - B. Mahmoud and a Triangle
//
//  Created by S M HEMEL on 3/21/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int a[1000000];
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],i++);
    sort(a,a+n);
    for(int i=0; i<n-2; i++)
        if(a[i]+a[i+1] > a[i+2])
            return 0 * puts("YES");
    puts("NO");
    return 0;
}
