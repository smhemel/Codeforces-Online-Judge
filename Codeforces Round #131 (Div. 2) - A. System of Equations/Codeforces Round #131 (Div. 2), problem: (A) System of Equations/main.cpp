//
//  main.cpp
//  , contest: Codeforces Round #131 (Div. 2), problem: (A) System of Equations
//
//  Created by S M HEMEL on 12/12/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int sum = 0;
    for(int i=0; i<=n; i++)
        for(int j=0; j<=m; j++)
            if ((i+j*j == m) && (i*i+j == n))
                sum++;
    cout << sum;
}
