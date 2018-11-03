//
//  main.cpp
//  Codeforces Beta Round #10 - A. Power Consumption Calculation
//
//  Created by S M HEMEL on 3/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int n,p1,p2,p3,t1,t2;
int l[105],r[105];
int main()
{
    scanf("%d%d%d%d%d%d",&n,&p1,&p2,&p3,&t1,&t2);
    for(int i=1;i<=n;i++)
        scanf("%d%d",&l[i],&r[i]);
    int sum=(r[1]-l[1])*p1;
    for(int i=2;i<=n;i++)
    {
        if(l[i]-r[i-1]<=t1)
            sum+=(l[i]-r[i-1])*p1;
        else{
            sum+=t1*p1;
            if(l[i]-r[i-1]<=t1+t2)
                sum+=(l[i]-r[i-1]-t1)*p2;
            else{
                sum+=t2*p2+(l[i]-r[i-1]-t1-t2)*p3;
            }
        }
        sum+=(r[i]-l[i])*p1;
    }
    printf("%d\n",sum);
}
