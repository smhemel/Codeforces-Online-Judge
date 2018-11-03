//
//  main.cpp
//  Codeforces Round #394 (Div. 2) - B. Dasha and friends
//
//  Created by S M HEMEL on 5/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
int n,m;
int a[100],b[100],c[100];
int main()
{
    scanf("%d%d", &n, &m);
    for(int i=0; i<n; i++)
        scanf("%d", &a[i]);
    for(int i=0; i<n; i++)
        scanf("%d", &b[i]);
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n; j++)
            c[j] = (b[j]+i)%m;
        sort(c,c+n);
        bool check = true;
        for(int j=0; j<n; j++)
            if (a[j] != c[j]) {
                check = false;
                break;
            }
        if(check)
            return 0 * puts("YES");
    }
    printf("NO\n");
    return 0;
}
