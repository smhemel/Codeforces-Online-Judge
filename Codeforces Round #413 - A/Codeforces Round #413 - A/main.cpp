//
//  main.cpp
//  Codeforces Round #413 - A
//
//  Created by S M HEMEL on 5/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    long long n,t,k,d,x,total=0;
    while(cin >> n >> t >> k >> d)
    {
        total=0;
        x = d/t;
        if(d%t!=0) x++;
        total = x*k;
        if(!(d%t))
            if(n-total<=k)
                return 0 * puts("NO");
        if(n-total>0)
            return 0 * puts("YES");
        return 0 * puts("NO");
    }
    return 0;
}
