//
//  main.cpp
//  Codeforces Round #258 (Div. 2) - B. Sort the Array
//
//  Created by S M HEMEL on 4/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;
int a[110000],b[110000];
int main()
{
    int i,n,x,y;
    scanf("%d",&n);
    for (i=0; i<n; i++) {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    sort(b,b+n);
    for(i=0; i<n; i++)
        if(a[i]!=b[i]) break;
    if(i==n)
        return 0 * puts("yes\n1 1");
    x = i;
    for(i=n-1; i>=0; i--)
        if(a[i]!=b[i]) break;
    y = i;
    reverse(a+x,a+y+1);
    for(i=0; i<n; i++)
        if (a[i]!=b[i])
            return 0 * printf("no\n");
    printf("yes\n%d %d\n",x+1,y+1);
    return 0;
}
