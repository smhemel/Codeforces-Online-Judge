//
//  main.cpp
//  Codeforces Round #306 (Div. 2) - A. Two Substrings
//
//  Created by S M HEMEL on 2/27/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char str[100004];
char *p1 , *p2;
int main()
{
    scanf("%s",str);
    p1 = strstr(str,"AB");
    p2 = strstr(str,"BA");
    if(p1==NULL || p2==NULL)
        return 0 * printf("NO\n");
    p1 = strstr(p1+2,"BA");
    p2 = strstr(p2+2,"AB");
    if(p1!=NULL || p2!=NULL)
        return 0 * printf("YES\n");
    printf("NO\n");
    return 0;
}
