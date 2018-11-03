//
//  main.cpp
//  Codeforces Round #392 (Div. 2), problem: (B) Blown Garland
//
//  Created by S M HEMEL on 1/20/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
char s[105], a[5];
int c[99];
int main()
{
    int i;
    scanf("%s", s);
    for(i=0; s[i]; i++) {
        if(s[i] != '!')
            a[i%4] = s[i];
    }
    for(i=0; s[i]; i++) {
        if(s[i] == '!')
            c[a[i%4]]++;
    }
    printf("%d %d %d %d", c['R'], c['B'], c['Y'], c['G']);
    return 0;
}
