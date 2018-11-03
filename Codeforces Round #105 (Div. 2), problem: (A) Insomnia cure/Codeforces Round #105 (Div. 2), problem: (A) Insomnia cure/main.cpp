//
//  main.cpp
//  Codeforces Round #105 (Div. 2), problem: (A) Insomnia cure
//
//  Created by S M HEMEL on 12/11/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;

int main()
{
    int k,l,m,n,d,value(0);
    cin>>k>>l>>m>>n>>d;
    while (d>0)
    {
        if ((d%k==0)||(d%l==0)||(d%m==0)||(d%n==0))
            value=value+1;
        d--;
    }
    cout<<value<<endl;
    return 0;
}
