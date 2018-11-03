//
//  main.cpp
//  Yandex.Algorithm 2011 Qualification 2 - A. Double Cola
//
//  Created by S M HEMEL on 4/14/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n>5)
    {
        while(n>5)
            n = (n%2==0) ? ((n-4)/2) : ((n-5)/2);
    }
    if(n==1)
        printf("Sheldon");
    else if(n==2)
        printf("Leonard");
    else if(n==3)
        printf("Penny");
    else if(n==4)
        printf("Rajesh");
    else
        printf("Howard");
    return 0;
}
