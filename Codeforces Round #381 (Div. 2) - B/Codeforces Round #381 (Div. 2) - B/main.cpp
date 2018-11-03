//
//  main.cpp
//  Codeforces Round #381 (Div. 2) - B
//
//  Created by S M HEMEL on 3/11/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int n,m,sum=0,s=0,l,u;
    cin>>n>>m;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<m;i++)
    {
        cin>>l>>u;
        l=l-1;s=0;
        for(int j=l;j<u;j++)
            s+=a[j];
        if(s>=0)
            sum+=s;
        printf("s = %d\nsum = %d\n",s,sum);
    }
    cout<<sum<<endl;
    return 0;
}
