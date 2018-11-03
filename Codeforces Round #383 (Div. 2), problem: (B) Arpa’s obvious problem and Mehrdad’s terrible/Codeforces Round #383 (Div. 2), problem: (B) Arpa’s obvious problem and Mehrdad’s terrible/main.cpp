//
//  main.cpp
//  Codeforces Round #383 (Div. 2), problem: (B) Arpa’s obvious problem and Mehrdad’s terrible
//
//  Created by S M HEMEL on 12/6/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
int a[10000024];
void read(int &x)
{
    char c;
    bool t=false;
    for(c=getchar();(c<'0'||c>'9')&&c!='-';c=getchar());
    if(c=='-'){c=getchar(); t=true;} x=c-'0';
    for(c=getchar();c>='0'&&c<='9';c=getchar()) x=x*10+c-'0';
    if(t) x=-x;
}
int main()
{
    int n,x,m;
    read(n);
    read(x);
    long long ans = 0;
    while(n--)
    {
        read(m);
        ans += a[x^m];
        a[m]++;
    }
    cout << ans <<endl;
}
