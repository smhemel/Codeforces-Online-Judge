//
//  main.cpp
//  Codeforces Round #382 C. Tennis Championship
//
//  Created by S M HEMEL on 11/30/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
long long n,ans,a=1,b=1,t=2;
int main()
{
    cin>>n;
    while(t<=n)
    {
        a=b;
        b=t;
        t=a+b;
        ans++;
    }
    cout<<ans;
    return 0;
}
