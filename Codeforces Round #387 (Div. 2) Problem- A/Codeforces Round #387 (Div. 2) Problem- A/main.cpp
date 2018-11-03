//
//  main.cpp
//  Codeforces Round #387 (Div. 2) Problem- A
//
//  Created by S M HEMEL on 12/19/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
using namespace std;
int i,n;
int main()
{
    scanf("%d", &n);
    for (i=sqrt(n); i>=1; i--)
        if (n%i==0)
            break;
    printf("%d %d\n", i,n/i);
    return 0;
}
