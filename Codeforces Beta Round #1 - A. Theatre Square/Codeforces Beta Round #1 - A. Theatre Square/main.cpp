//
//  main.cpp
//  Codeforces Beta Round #1 - A. Theatre Square
//
//  Created by S M HEMEL on 3/11/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include<stdio.h>
#include<math.h>
int main()

{
    double n,m,a;
    double ans;
    while(scanf("%lf %lf %lf",&n,&m,&a) !=EOF)
    {
        double row = ceil(n/a);
        double column = ceil(m/a);
        ans =row * column;
        printf("%.0lf\n",ans);
    }
    return 0;
}
