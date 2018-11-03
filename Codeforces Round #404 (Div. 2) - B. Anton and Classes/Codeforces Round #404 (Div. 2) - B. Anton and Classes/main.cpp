//
//  main.cpp
//  Codeforces Round #404 (Div. 2) - B. Anton and Classes
//
//  Created by S M HEMEL on 3/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int q,w=0,m,x=-2e9,y=2e9,x1=-2e9,y1=2e9;
        for(int i=0; i<n; i++){
            scanf("%d%d",&q,&w);
            x = max(x,q);
            y = min(y,w);
        }
        scanf("%d",&m);
        for(int i=0; i<m; i++){
            scanf("%d%d",&q,&w);
            x1 = max(x1,q);
            y1 = min(y1,w);
        }
        int ans = 0;
        ans = max(ans,x1-y);
        ans = max(ans,x-y1);
        cout << ans << endl;
    }
    return 0;
}
