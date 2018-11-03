//
//  main.cpp
//  Codeforces Round #270 - A. Design Tutorial: Learn from Math
//
//  Created by S M HEMEL on 3/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    if (!(n%2)) printf("%d %d\n", 4, n-4);
    else printf("%d %d\n", 9, n-9);
    return 0;
}
