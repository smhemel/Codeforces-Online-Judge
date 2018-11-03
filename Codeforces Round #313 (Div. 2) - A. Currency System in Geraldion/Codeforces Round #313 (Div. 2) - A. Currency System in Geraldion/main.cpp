//
//  main.cpp
//  Codeforces Round #313 (Div. 2) - A. Currency System in Geraldion
//
//  Created by S M HEMEL on 4/5/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//


#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    int n, in;
    while(cin >> n)
    {
        bool ok = false;
        while(n--)
        {
            cin >> in;
            if(in == 1)
                ok = true;
        }
        if(ok)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }
    return 0;
}
