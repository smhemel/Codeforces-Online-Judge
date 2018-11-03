//
//  main.cpp
//  Codeforces Round #269 (Div. 2) - A. MUH and Sticks
//
//  Created by S M HEMEL on 2/22/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int a[6];
    for(int i=0; i<6; cin >> a[i],i++);
    sort(a,a+6);
    if ((a[0]==a[3] && a[4]!=a[5]) || (a[1]==a[4] && a[0]!=a[5]) || (a[2]==a[5] && a[0]!=a[1])) {
        puts("Bear");
        return 0;
    }
    if ((a[0] == a[3] && a[4] == a[5]) || (a[2] == a[5] && a[0] == a[1])) {
        puts("Elephant");
        return 0 ;
    }
    puts("Alien");
    return 0;
}
