//
//  main.cpp
//  Codeforces Round #308 (Div. 2) - A. Vanya and Table
//
//  Created by S M HEMEL on 2/26/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstring>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int x1, y1, x2, y2;
        int cnt = 0;
        for(int i=0; i<n; ++i)
        {
            cin >> x1 >> y1 >> x2 >> y2;
            for(int j = x1; j <= x2; ++j)
                for(int l=y1; l<=y2; ++l)
                    cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}
