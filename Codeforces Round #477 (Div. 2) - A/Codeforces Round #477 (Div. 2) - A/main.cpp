//
//  main.cpp
//  Codeforces Round #477 (Div. 2) - A
//
//  Created by S M HEMEL on 7/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>
#include <cstdio>
using namespace std;
int main() {
    int n,t,h,s;
    scanf("%d%d", &n, &t);
    int mn = 0;
    for(int i=0; i<n; i++){
        scanf("%d%d", &h, &s);
        int mn1 = mn+1;
        int mn2 = h*60 + s;
        if(mn2-mn1<t) mn = mn2+t+1;
    }
    printf("%d %d\n", mn/60, mn%60);
}
