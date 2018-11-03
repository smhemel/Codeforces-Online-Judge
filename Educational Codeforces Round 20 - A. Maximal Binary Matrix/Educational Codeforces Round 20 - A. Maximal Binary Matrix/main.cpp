//
//  main.cpp
//  Educational Codeforces Round 20 - A. Maximal Binary Matrix
//
//  Created by S M HEMEL on 4/28/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstdlib>
using namespace std;
int a[111][111];
int main()
{
    int n, k;
    cin >> n >> k;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
        {
            if(!k) break;
            if(!a[i][j] && i==j && k>0) {
                a[i][j] = 1;
                k--;
            }
            if(!a[i][j] && k>1 && i!=j) {
                a[i][j] = 1;
                --k;
                a[j][i] = 1;
                k--;
            }
        }
    if(k) return 0 * puts("-1");
    for(int i=1; i<=n; i++) {
        for(int j=1; j<=n; j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
}
