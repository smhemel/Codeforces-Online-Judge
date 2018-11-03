//
//  main.cpp
//  Codeforces Round #228 (Div. 2) - A. Fox and Number
//
//  Created by S M HEMEL on 3/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int k=__gcd(a[0],a[1]);
    for(int i=2;i<n;i++)
    {
        k=__gcd(k,a[i]);
    }
    cout<<k*n;
    return 0;
}
