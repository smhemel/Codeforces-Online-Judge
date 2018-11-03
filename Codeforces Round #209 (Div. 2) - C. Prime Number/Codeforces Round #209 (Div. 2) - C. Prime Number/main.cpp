//
//  main.cpp
//  Codeforces Round #209 (Div. 2) - C. Prime Number
//
//  Created by S M HEMEL on 3/31/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
const int MAXN = 1 << 20;
int a[MAXN];
long long big_pow(long long x, long long y) {
    long long z = 1;
    while (y > 0) {
        if (y & 1)
            z = z * x % 1000000007;
        x = x * x % 1000000007;
        y >>= 1;
    }
    return z;
}

int main()
{
    ios_base::sync_with_stdio(false);
    int n, x;
    scanf("%d%d", &n, &x);
    map<int, int> cnt;
    long long sum = 0;
    for(int i=0; i<n; i++) {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    for(int i=0; i<n; i++)
        cnt[-a[i]]++;
    while(true)
    {
        int at=cnt.begin()->first;
        if(cnt[at]%x== 0)
        {
            cnt[at+1] += cnt[at]/x;
            cnt.erase(at);
        }
        else
            break;
    }
    printf("%d\n",int(big_pow(x,sum+min(0,cnt.begin()->first))));
    return 0;
}
