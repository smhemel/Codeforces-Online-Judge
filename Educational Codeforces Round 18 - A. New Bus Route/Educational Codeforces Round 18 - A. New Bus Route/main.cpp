//
//  main.cpp
//  Educational Codeforces Round 18 - A. New Bus Route
//
//  Created by S M HEMEL on 3/27/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int a[1000000];
set <int> s;
int main()
{
    int n,cnt=0;
    cin >> n;
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    sort(a,a+n);
    int mn = INT_MAX;
    for(int i=1; i<n; i++)
        mn = min(mn,a[i]-a[i-1]);
    for(int i=1; i<n; i++)
        cnt += a[i]-a[i-1]==mn;
    printf("%d %d\n",mn,cnt);
    return 0;
}
