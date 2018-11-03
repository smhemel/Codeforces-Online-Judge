//
//  main.cpp
//  Codeforces Round #130 (Div. 2) - A. Dubstep
//
//  Created by S M HEMEL on 4/14/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<stdio.h>
#include<stdlib.h>
char s[201];
int main()
{
    int i, f, g;
    gets(s);
    for(i=0; s[i] ; i++)
    {
        f = 0,g = i;
        while (s[i]=='W' && s[i+1]=='U' && s[i+2]=='B'){
            i += 3,f = 1;
        }
        if(s[i])
        {
            if (f && g)
                putchar(' ');
            putchar(s[i]);
        }
    }
    putchar('\n');
    return 0;
}
