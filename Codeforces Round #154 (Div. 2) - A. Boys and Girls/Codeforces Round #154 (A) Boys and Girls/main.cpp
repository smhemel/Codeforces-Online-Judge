//
//  main.cpp
//  Codeforces Round #154 (A) Boys and Girls
//
//  Created by S M HEMEL on 11/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char a='B',b='G';
    int x,y;
    cin>>x>>y;
    if(y>x) swap(x,y),swap(a,b);
    while(x|y)
    {
        if(x) cout<<a,x--;
        if(y) cout<<b,y--;
    }
    return 0;
}
