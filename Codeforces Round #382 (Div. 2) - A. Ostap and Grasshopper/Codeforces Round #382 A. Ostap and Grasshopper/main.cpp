//
//  main.cpp
//  Codeforces Round #382 A. Ostap and Grasshopper
//
//  Created by S M HEMEL on 11/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    char s[150];
    int n, k;
    cin >> n >> k;
    cin >> s;
    int p1 = 0, p2 = 0;
    for(int i = 0; i < n; i++)
    {
        if(s[i] == 'G') p1 = i;
        if(s[i] == 'T') p2 = i;
    }
    if(p1 > p2)
        swap(p1, p2);
    while(p1 < p2 and s[p1+k] != '#')
        p1+=k;
    printf("%s\n", p1==p2?"YES":"NO");
    return 0;
}
