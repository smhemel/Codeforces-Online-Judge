//
//  main.cpp
//  Codeforces Round #143 (Div. 2), problem: (A) Team
//
//  Created by S M HEMEL on 12/22/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    long long n,a,b,c,d=0;
    cin>> n;
    while(n--)
    {
        cin>>a>>b>>c;
        if((a+b+c)>=2)
            d++;
    }
    cout<<d;
    return 0;
}
