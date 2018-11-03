//
//  main.cpp
//  VK Cup 2012 Qualification Round 1 - A. Next Round
//
//  Created by S M HEMEL on 3/11/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <stdio.h>
int main()
{
    int n,k;
    scanf ("%d %d", &n, &k);
    int solved [1111];
    for(int i=0; i<n; i++)
        scanf ("%d", &solved [i]);
    int m = solved [k-1];
    int count = 0;
    for(int i=0; i<n; i++)
        if ( solved [i] >= m && solved [i] )
            count++;
    printf ("%d\n", count);
    return 0;
}
