//
//  main.cpp
//  Codeforces Round #241 (Div. 2) - A. Guess a number!
//
//  Created by S M HEMEL on 3/29/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n, num;
char s[10];
char c;
int Min = -2000000000, Max = 2000000000;
int main()
{
    scanf("%d", &n);
    while(n--)
    {
        scanf("%s%d%*c%c", s, &num, &c);
        if(!strcmp(s,">="))
        {
            if(c == 'Y')
                Min = max(Min, num);
            else
                Max = min(Max, num-1);
        }
        else if(!strcmp(s, ">"))
        {
            if(c == 'Y')
                Min = max(Min, num+1);
            else
                Max = min(Max, num);
        }
        else if(!strcmp(s, "<="))
        {
            if(c == 'Y')
                Max = min(Max, num);
            else
                Min = max(Min, num+1);
        }
        else if(!strcmp(s ,"<"))
        {
            if(c == 'Y')
                Max = min(Max, num-1);
            else
                Min = max(Min, num);
        }
    }
    if(Max >= Min)
        printf("%d\n", Max);
    else
        printf("Impossible\n");
    return 0;
}
