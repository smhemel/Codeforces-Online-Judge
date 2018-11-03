//
//  main.cpp
//  Codeforces Round #357 (Div. 2) - A. A Good Contest
//
//  Created by S M HEMEL on 3/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,l,r;
    cin >> n;
    bool flag = false;
    while(n--)
    {
        string s;
        cin >> s >> l >> r;
        if (l >= 2400 && r > l)
            flag = true;
    }
    if (flag) puts("YES");
    else puts("NO");
    return 0;
}
