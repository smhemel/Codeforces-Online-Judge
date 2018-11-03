//
//  main.cpp
//  Good Bye 2014 - A. New Year Transportation
//
//  Created by S M HEMEL on 4/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//


#include <iostream>
using namespace std;
int main()
{
    int n, t, a[1234567];
    scanf("%d%d",&n,&t);
    for(int i=1; i<n; i++)
        scanf("%d", &a[i]);
    int x = 1;
    while(x<t)
        x += a[x];
    puts(x == t ? "YES" : "NO");
    return 0;
}
