//
//  main.cpp
//  VK Cup 2017 - C - Maximum Number
//  Created by S M HEMEL on 4/5/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<stdio.h>
main()
{
    int n;
    scanf("%d",&n);
    if(n&1)
    {
        printf("7");
        n-=3;
    }
    for(; n>0; n-=2)
        printf("1");
    return 0;
}
