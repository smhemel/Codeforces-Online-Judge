//
//  main.cpp
//  Codeforces Round #364 (Div. 2) - A. Cards
//
//  Created by S M HEMEL on 3/11/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int v[105];
bool vis[105];
int main()
{
    int n,sum=0,ave;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&v[i]);
        sum+=v[i];
    }
    ave=2*sum/n;
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            for(int j=i+1;j<=n;j++)
            {
                if(!vis[j]&&v[i]+v[j]==ave)
                {
                    printf("%d %d\n",i,j);
                    vis[i]=vis[j]=1;
                    break;
                }
            }
        }
    }
    return 0;
}
