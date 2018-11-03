//
//  main.cpp
//  Codeforces Round #151 (Div. 2), problem: (B) Increase and Decrease
//
//  Created by S M HEMEL on 12/11/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include <cstdio>
using namespace std;
int main()
{
    int n,i;
    int sum=0;
    int a[100000];
    while(cin >> n)
    {
        sum=0;
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
            sum=sum+a[i];
        }
        if(sum%n==0)
            printf("%d\n",n);
        else
            printf("%d\n",n-1);
    }
    return 0;
}
