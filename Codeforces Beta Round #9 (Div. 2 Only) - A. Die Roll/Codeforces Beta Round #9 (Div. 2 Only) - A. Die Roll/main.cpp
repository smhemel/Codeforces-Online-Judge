//
//  main.cpp
//  Codeforces Beta Round #9 (Div. 2 Only) - A. Die Roll
//
//  Created by S M HEMEL on 3/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<stdio.h>
int main()
{
    int a,b,c,d=6;
    scanf("%d%d",&a,&b);
    if(a<b) a=b;
    c=7-a;
    if(c==3) return 0 * printf("1/2");
    if(c==6) return 0 * printf("1/1");
    if(c%2==0) c=c/2 , d=3;
    printf("%d/%d\n",c,d);
    return 0;
}
