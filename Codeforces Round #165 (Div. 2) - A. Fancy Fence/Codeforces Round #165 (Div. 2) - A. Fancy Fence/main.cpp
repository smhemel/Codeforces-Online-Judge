//
//  main.cpp
//  Codeforces Round #165 (Div. 2) - A. Fancy Fence
//
//  Created by S M HEMEL on 3/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m;
        cin >> m;
        if(!(360%(180-m)))
            puts("YES");
        else puts("NO");
    }
    return 0;
}
