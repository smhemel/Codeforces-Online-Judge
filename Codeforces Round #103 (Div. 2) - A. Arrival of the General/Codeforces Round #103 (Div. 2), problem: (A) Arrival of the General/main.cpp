//
//  main.cpp
//  Codeforces Round #103 (Div. 2), problem: (A) Arrival of the General
//
//  Created by S M HEMEL on 12/7/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int a[100],n,i,x,y;
int main()
{
    cin>>n;
    for(;i<n;i++)
    {
        cin>>a[i];
        x = a[i]>a[x] ? i:x;
        y = a[i]<=a[y] ? i:y;
    }
    cout<<n-y-1+x-(y<x);
    return 0;
}
