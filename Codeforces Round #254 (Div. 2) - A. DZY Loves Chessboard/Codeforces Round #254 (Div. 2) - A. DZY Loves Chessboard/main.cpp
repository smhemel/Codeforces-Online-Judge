//
//  main.cpp
//  Codeforces Round #254 (Div. 2) - A. DZY Loves Chessboard
//
//  Created by S M HEMEL on 2/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<stdio.h>
char a;
int n,m;
int main()
{
    scanf("%d %d",&n,&m);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            scanf("%c",&a);
            if (a == '.')
                ((i+j)%2) ? printf("B") : printf("W");
            else
                printf("%c",a);
        }
    }
    return 0;
}
