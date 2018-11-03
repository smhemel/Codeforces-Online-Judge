//
//  main.cpp
//  Codeforces Round #175 (Div. 2), problem: (C) Building Permutation
//
//  Created by S M HEMEL on 1/5/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int a[300000];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++)
        scanf("%d", a+i);
    sort(a, a+n);
    long long ops = 0;
    for(int i=0; i<n; i++)
        ops += abs(a[i] - i - 1);
    cout << ops << '\n';
    return 0;
}
