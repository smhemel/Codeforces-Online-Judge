//
//  main.cpp
//  Codeforces Round #331 (Div. 2) - A. Wilbur and Swimming Pool
//
//  Created by S M HEMEL on 1/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;
int n;
int a[4][2];
int main()
{
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i][0] >> a[i][1];
    if (n==1) return 0 * puts("-1");
    for(int i=0; i<n; i++)
        for(int j=i+1; j<n; j++) {
            if (a[i][0] == a[j][0] || a[i][1] == a[j][1])
                continue;
            cout << abs(a[i][0]-a[j][0]) * abs(a[i][1]-a[j][1]) << endl;
            return 0;
        }
    puts("-1");
    return 0;
}
