//
//  main.cpp
//  Codeforces Round #408 (Div. 2) - B. Find The Bone
//
//  Created by S M HEMEL on 4/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<cstdio>
const int MAXN=1e6+10;
int n,m,k;
bool vis[MAXN];
int main()
{
    scanf("%d%d%d",&n,&m,&k);
    for(int i=1;i<=m;++i)
    {
        int x;
        scanf("%d",&x);
        vis[x]=true;
    }
    int pos=1;
    for(int i=1;i<=k;++i)
    {
        int u,v;
        if(vis[pos])break;
        scanf("%d%d",&u,&v);
        if(pos==u)pos=v;
        else if(pos==v)pos=u;
    }
    printf("%d\n",pos);
    return 0;
}
