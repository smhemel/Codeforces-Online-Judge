//
//  main.cpp
//  Codeforces Round #112 (Div. 2) A. Supercentral Point
//
//  Created by S M HEMEL on 3/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
struct node
{
    int x,y;
}p[210];
int main() {
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        int i;
        for(i=0;i<n;i++)
            scanf("%d%d",&p[i].x,&p[i].y);
        int ans=0;
        for(i=0;i<n;i++)
        {
            int cnt = 0;
            for(int j=0;j<n;j++)
            {
                if(p[j].x==p[i].x&&p[j].y>p[i].y) cnt++;
                if(p[j].x==p[i].x&&p[j].y<p[i].y) cnt++;
                if(p[j].y==p[i].y&&p[j].x<p[i].x) cnt++;
                if(p[j].y==p[i].y&&p[j].x>p[i].x) cnt++;
            }
            if(cnt==4)
                ans++;
        }
        printf("%d\n",ans);
    }
    return 0;
}
