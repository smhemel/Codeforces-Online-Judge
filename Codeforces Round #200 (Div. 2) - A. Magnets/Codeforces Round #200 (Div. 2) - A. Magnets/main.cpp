//
//  main.cpp
//  Codeforces Round #200 (Div. 2) - A. Magnets
//
//  Created by S M HEMEL on 4/14/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <stdio.h>
int main()
{
    int a,b,n,cnt = 1;
    scanf("%d%d",&n,&a);
    n--;
    while(n--)
    {
        scanf("%d",&b);
        if(a!=b) cnt++;
        a = b;
    }
    printf("%d\n",cnt);
    return 0;
}
