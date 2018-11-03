//
//  main.cpp
//  Codeforces Round #326 (Div. 2) - A. Duff and Meat
//
//  Created by S M HEMEL on 4/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <cstdio>
using namespace std;
int main()
{
    int n,total = 0,temp = 0,a,b;
    scanf("%d",&n);
    scanf("%d%d",&a,&b);
    total = a*b;
    temp = b;
    for(int i=1; i<n; i++)
    {
        scanf("%d%d",&a,&b);
        if(temp>b)
            temp = b;
        total += (a*temp);
    }
    printf("%d\n",total);
    return 0;
}
