//
//  main.cpp
//  Codeforces Round #Pi (Div. 2) - A. Lineland Mail
//
//  Created by S M HEMEL on 3/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
const int maxn=1e5+5;
int data[maxn];
int main()
{
    int m;
    while(~scanf("%d",&m))
    {
        for(int i=0; i<m; i++)
            scanf("%d",&data[i]);
        printf("%d %d\n",data[1]-data[0], data[m-1]-data[0]);
        for(int i=1; i<m-1; i++)
        {
            printf("%d %d\n",min(data[i]-data[i-1], data[i+1]-data[i])
                   ,max(data[m-1]-data[i],data[i]-data[0]));
        }
        printf("%d %d\n",data[m-1]-data[m-2],data[m-1]-data[0]);
    }
    return 0;
}
