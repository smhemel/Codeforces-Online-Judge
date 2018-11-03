//
//  main.cpp
//  Codeforces Round #412 (rated, Div. 2, base on VK Cup 2017 Round 3) - B. T-Shirt Hunt
//
//  Created by S M HEMEL on 5/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int p,x,y;
int main()
{
    cin >> p >> x >> y;
    for(int i=x; i>=y; i-=50)
    {
        int z = (i/50)%475;
        for(int j=1; j<=25; j++)
        {
            z = (z*96+42)%475;
            if(26+z==p)
                return 0 * puts("0");
        }
    }
    for(int i=x ; ; i+=50)
    {
        if(i<=y) continue;
        int z = (i/50)%475;
        for(int j=1; j<=25; j++)
        {
            z = (z*96+42)%475;
            if(26+z==p)
                return 0 * printf("%d\n",((i-x-1)/100+1));
        }
    }
    return 0;
}
