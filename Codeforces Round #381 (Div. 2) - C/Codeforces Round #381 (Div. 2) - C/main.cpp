//
//  main.cpp
//  Codeforces Round #381 (Div. 2) - C
//
//  Created by S M HEMEL on 3/11/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//


#include<iostream>
using namespace std;
int main()
{
    int n,m;
    int mi=1000005;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
    {
        int a,b;
        scanf("%d%d",&a,&b);
        mi=min(mi,b-a+1);
    }
    printf("%d\n",mi);
    for(int i=0;i<n;i++)
        printf("%d ",i%mi);
    return 0;
}
