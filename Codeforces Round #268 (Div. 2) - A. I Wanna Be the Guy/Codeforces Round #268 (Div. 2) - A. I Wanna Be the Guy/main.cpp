//
//  main.cpp
//  Codeforces Round #268 (Div. 2) - A. I Wanna Be the Guy
//
//  Created by S M HEMEL on 2/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
    int n,m,m1,x;
    cin >> n;
    cin >> m;
    bool a[n+1];
    memset(a,0, sizeof(a));
    for(int i=0; i<m; cin >> x,a[x] = 1,i++);
    cin >> m1;
    for(int i=0; i<m1; cin >> x,a[x] = 1,i++);
    for(int i=1; i<n+1; i++)
    {
        if(a[i]!=1)
        {
            puts("Oh, my keyboard!");
            return 0;
        }
    }
    puts("I become the guy.");
    return 0;
}
