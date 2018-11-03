//
//  main.cpp
//  Codeforces Round #355 (Div. 2) - A. Vanya and Fence
//
//  Created by S M HEMEL on 3/11/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <stdio.h>

int main()
{
    int a[1000],n,i,j,k,count=0;
    scanf("%d",&n);
    scanf("%d",&k);
    for (i=1; i<=n; i++)
        scanf("%d",&a[i]);
    for (j=1; j<=n; j++)
        if (a[j]<=k) count++;
        else count+=2;
    printf("%d\n",count);
    return 0;
}
