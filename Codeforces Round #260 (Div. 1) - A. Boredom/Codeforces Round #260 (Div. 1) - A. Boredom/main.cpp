//
//  main.cpp
//  Codeforces Round #260 (Div. 1) - A. Boredom
//
//  Created by S M HEMEL on 20/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
const int N = 1000010;
int cnt[N];
long long f[N];
int main()
{
    int n,x,Max = 0;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
    {
        cin >> x;
        cnt[x]++;
        if(Max<x)
            Max = x;
    }
    for(int i=1; i<=Max; i++) {
        f[i] = (long long)i * cnt[i];
        if(i-2>=0)
            f[i] += f[i-2];
        if(f[i-1]>f[i])
            f[i] = f[i-1];
    }
    cout << f[Max] << endl;
    return 0;
}
