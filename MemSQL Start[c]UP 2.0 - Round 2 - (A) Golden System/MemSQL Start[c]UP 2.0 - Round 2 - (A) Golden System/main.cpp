//
//  main.cpp
//  MemSQL Start[c]UP 2.0 - Round 2 - (A) Golden System
//
//  Created by S M HEMEL on 2/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<cstring>
#include<iostream>
#include<algorithm>
#include <cstdlib>
using namespace std;
#define l(x) (int)strlen(x)
char a[100001],b[100001];
bool fa[100001],fb[100001];
int main()
{
    cin >> a >> b;
    int len1 = l(a),len2 = l(b);
    for(int i=len1-1; i>=0; i--) {
        fa[i] = (a[len1-i-1]==49);
        for(int j=i; fa[j] && fa[j+1]; j+=2)
            fa[j+2] = true,fa[j] = fa[j+1] = false;
    }
    for(int i=len2-1; i>=0; i--) {
        fb[i]=(b[len2-i-1]==49);
        for(int j=i; fb[j] && fb[j+1]; j+=2)
            fb[j+2] = true,fb[j] = fb[j+1] = false;
    }
    for(int i=100000;i>=0;i--)
    {
        if(fa[i]<fb[i]) {
            printf("<\n");
            return 0;
        }
        if(fa[i]>fb[i]) {
            printf(">\n");
            return 0;
        }
    }
    printf("=\n");
    return 0;
}
