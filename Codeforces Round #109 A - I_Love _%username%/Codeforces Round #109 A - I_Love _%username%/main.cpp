//
//  main.cpp
//  Codeforces Round #109 A - I_Love _%username%
//
//  Created by S M HEMEL on 11/26/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int mn,mx,t,n,a;
int main()
{
    cin >> n >> a;
    mn=a,mx=a;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        if(a>mx){
            mx=a; t++;}
        if(a<mn){
            mn=a; t++;}
    }
    cout<<t;
    return 0;
}
