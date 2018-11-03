//
//  main.cpp
//  Codeforces Round #204 (Div. 2) - A. Jeff and Digits
//
//  Created by S M HEMEL on 3/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int n,k,f=0,z=0,i;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin >> k;
        if(k==5)
            f++;
        else
            z++;
    }
    int q = f;
    while((q*5)%9!=0)
        q--;
    if(z>0)
    {
        if(q==0)
            cout<<"0";
        else
        {
            for(i=0;i<q;i++)
                cout<<"5";
            for(i=0;i<z;i++)
                cout<<"0";
        }
    }
    else
        cout<<"-1";
    return 0;
    
}
