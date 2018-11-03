//
//  main.cpp
//  Codeforces Round #140 (Div. 2) B. Effective Approach
//
//  Created by S M HEMEL on 12/19/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    long long int n,m,a[100001],k=0,l=0,p,q;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>p;
        a[p]=i;
    }
    cin >> m;
    for(int i=1;i<=m;i++)
    {
        cin>>q;
        k=k+a[q];
        l=l+n-a[q]+1;
    }
    cout<< k <<" "<< l;
    return(0);
}
