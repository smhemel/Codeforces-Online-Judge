//
//  main.cpp
//  codeforces Round #382 B- Urbaization
//
//  Created by S M HEMEL on 11/28/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//
#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,n1,n2,v[100005];
double sum=0;
int main()
{
    cin >> n >> n1 >> n2;
    for(int i=1;i<=n;i++)
        cin >> v[i];
    sort(v+1,v+1+n);
    if(n2<n1)
        swap(n1,n2);
    for(int i=n;i>n-n1;i--)
        sum+=double(v[i])/n1;
    for(int i=n-n1;i>n-n1-n2;i--)
        sum+=double(v[i])/n2;
    
    printf("%.6f",sum);
    return 0;
}
