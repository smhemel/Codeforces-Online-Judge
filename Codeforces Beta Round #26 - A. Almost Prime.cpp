//
//  main.cpp
//  Codeforces Beta Round #26 - A. Almost Prime
//
//  Created by S M HEMEL on 8/12/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n, amount(0);
    scanf("%d", &n);
    
    bool b[3001] = {false};
    int p[3001] = {0};
    for (int i = 2; i <= n; ++i)
    {
        if (!b[i])
        {
            for (int j = i + i; j <= n; j += i)
            {
                b[j] = true;
                p[j] += 1;
            }
        }
        
        if (p[i] == 2)
        {
            amount += 1;
        }
    }
    printf("%d\n", amount);
    return 0;
}
