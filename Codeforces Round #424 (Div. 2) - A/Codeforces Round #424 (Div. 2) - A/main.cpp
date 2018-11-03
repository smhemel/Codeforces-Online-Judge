//
//  main.cpp
//  Codeforces Round #424 (Div. 2) - A
//
//  Created by S M HEMEL on 7/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//
#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>
using namespace std;
int main()
{
    int x[10000];
    int m;
    cin >> m;
    for(int i=0; i<m; i++)
        cin >> x[i];
    if(m==1)
        return 0 * puts("YES");
    int i;
    for(i=1; i<m; i++)
        if(x[i]<=x[i-1])
            break;
    for(; i<m; i++)
        if(x[i]!=x[i-1])
            break;
    for(; i<m; i++)
        if(x[i]>=x[i-1])
            break;
    if(i==m)
        return 0 * puts("YES");
    else
        return 0 * puts("NO");
    return 0;
}
