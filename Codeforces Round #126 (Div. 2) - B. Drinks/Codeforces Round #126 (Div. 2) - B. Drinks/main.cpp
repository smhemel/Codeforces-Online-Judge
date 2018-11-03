//
//  main.cpp
//  Codeforces Round #126 (Div. 2) - B. Drinks
//
//  Created by S M HEMEL on 4/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
    double n,x,sum = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        sum +=x;
    }
    double ans = (double)sum/n;
    printf("%.12lf\n",ans);
    return 0;
}
