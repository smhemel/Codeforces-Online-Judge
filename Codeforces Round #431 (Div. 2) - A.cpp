//
//  main.cpp
//  Codeforces Round #431 (Div. 2) - A
//
//  Created by S M HEMEL on 1/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int a[1000];
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    if(n&1 && a[0]&1 && a[n-1]&1)
        puts("Yes");
    else
        puts("No");
    return 0;
}
