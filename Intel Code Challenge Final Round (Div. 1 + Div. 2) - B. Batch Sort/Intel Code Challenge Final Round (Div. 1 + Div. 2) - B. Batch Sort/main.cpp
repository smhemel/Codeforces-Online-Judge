//
//  main.cpp
//  Intel Code Challenge Final Round (Div. 1 + Div. 2) - B. Batch Sort
//
//  Created by S M HEMEL on 3/11/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include<bits/stdc++.h>
using namespace std;
const int maxn = 55;

int a[maxn][maxn],n,m;
bool check(int x,int y)
{
    for(int i=1;i<=n;i++)
    {
        int flag=0;
        for(int j=1;j<=m;j++)
        {
            int tmp=a[i][j];
            if(j==x)tmp=a[i][y];
            if(j==y)tmp=a[i][x];
            if(tmp!=j)flag++;
        }
        if(flag!=0&&flag!=2)
            return false;
    }
    return true;
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++)
        for(int j=1;j<=m;j++)
            scanf("%d",&a[i][j]);
    for(int i=1;i<=m;i++)
        for(int j=1;j<=i;j++)
            if(check(i,j))
                return puts("YES"),0;
    printf("NO");
}
