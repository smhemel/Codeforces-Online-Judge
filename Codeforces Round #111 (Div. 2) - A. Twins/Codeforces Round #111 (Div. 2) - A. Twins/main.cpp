//
//  main.cpp
//  Codeforces Round #111 (Div. 2) - A. Twins
//
//  Created by S M HEMEL on 4/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[10000];
int main()
{
    int n,sum = 0,sum1 = 0,ans = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    sort(a,a+n,greater<int>());
    for(int i=0; i<n; i++)
    {
        sum -= a[i];
        sum1 += a[i];
        if(sum1>sum)
        {
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
    return 0;
}
