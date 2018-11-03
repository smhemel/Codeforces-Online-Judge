//
//  main.cpp
//  Tinkoff Challenge - Elimination Round - A
//
//  Created by S M HEMEL on 4/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
long long int a[100000];
int main()
{
    long long int n,m;
    cin >> n >> m;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    if(n==1)
        return 0 * puts("0");
    sort(a,a+n);
    long long int cnt = 0;
    long long x=0;
    for(int i=1; i<n; i++){
        x = abs(a[i]-a[0]);
        if(x%m!=0)
            return 0 * puts("-1");
        cnt += x/m;
    }
    cout << cnt << endl;
    return 0;
}
