//
//  main.cpp
//  Codeforces Beta Round #65 (Div. 2) - A. Way Too Long Words
//
//  Created by S M HEMEL on 3/11/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char word[100];
    scanf("%d",&n);
    while (n--)
    {
        scanf("%s",word);
        int length = (int) strlen (word);
        if (length>10)
        {
            printf("%c%d%c\n",word[0],length-2,word[length-1]);
        }
        else
            printf("%s\n",word);
    }
    return 0;
}
