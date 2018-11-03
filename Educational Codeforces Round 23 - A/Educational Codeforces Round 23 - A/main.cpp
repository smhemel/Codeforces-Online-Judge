//
//  main.cpp
//  Educational Codeforces Round 23 - A
//
//  Created by S M HEMEL on 6/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int x,y,x1,y1,n,m;
    cin >> x >> y >> x1 >> y1;
    cin >> n >> m;
    int in =  abs(x-x1);
    int out = abs(y-y1);
    if(in%n!=0 || out%m!=0)
        return 0 * puts("NO");
    if(((in/n)&1) != ((out/m)&1))
        return 0 * puts("NO");
    puts("YES");
    return 0;
}
