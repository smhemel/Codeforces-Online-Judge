//
//  main.cpp
//  Codeforces Round #215 (Div. 2) - A. Sereja and Coat Rack
//
//  Created by S M HEMEL on 3/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
#define N 100010
int n,m,d,a[1000];
int main()
{
    scanf("%d%d",&n,&d);
    for(int i=0; i<n; i++)
        scanf("%d",&a[i]);
    scanf("%d",&m);
    sort(a,a+n);
    int res=0;
    if(n>=m)
        for(int i=0; i<m; i++)
            res+=a[i];
    else
    {
        for(int i=0; i<n; i++)
            res+=a[i];
        for(int i=0; i<m-n; i++)
            res-=d;
    }
    printf("%d\n",res);
    return 0;
}
