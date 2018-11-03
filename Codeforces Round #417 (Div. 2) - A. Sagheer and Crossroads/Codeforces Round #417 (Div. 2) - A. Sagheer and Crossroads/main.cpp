//
//  main.cpp
//  Codeforces Round #417 (Div. 2) - A. Sagheer and Crossroads
//
//  Created by S M HEMEL on 6/1/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int l[4],s[4],r[4],p[4];
int main()
{
    for(int i=0;i<4;i++)
        cin >> l[i] >> s[i] >> r[i] >> p[i];
    for(int i=0;i<4;i++)
        if (p[i] && (l[i] || s[i] || r[i] || l[(i+1)%4] || s[(i+2)%4] || r[(i+3)%4]))
        {
            return 0 * puts("YES");
        }
    puts("NO");
    return 0;
}
