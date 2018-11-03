//
//  main.cpp
//  Codeforces Round #152 (Div. 2) A. Cupboards
//
//  Created by S M HEMEL on 12/11/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<stdio.h>
#define min(a,b) (a<b) ? a:b;
int main(void)
{
    int n,a,b,count=0,count1=0,count2=0,count3=0;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d%d",&a,&b);
        if(!a)
            count++;
        else
            count1++;
        if(b)
            count3++;
        else
            count2++;
    }
    a=min(count,count1);
    b=min(count2,count3);
    printf("%d",a+b);
    return 0;
}
