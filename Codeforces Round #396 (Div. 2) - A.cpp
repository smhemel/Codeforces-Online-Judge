//
//  main.cpp
//  Codeforces Round #396 (Div. 2) - A
//
//  Created by S M HEMEL on 2/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//



#include<iostream>
#include <cstdio>
#include <string>
using namespace std;
int main()
{
    
    string a,b;
    cin>>a>>b;
    if(a==b)puts("-1");
    else if(a.length()>b.length())
        cout<<a.length()<<endl;
    else
        cout<<b.length()<<endl;
    return 0;
}

