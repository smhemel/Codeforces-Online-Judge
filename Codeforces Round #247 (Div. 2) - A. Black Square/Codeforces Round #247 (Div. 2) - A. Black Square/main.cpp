//
//  main.cpp
//  Codeforces Round #247 (Div. 2) - A. Black Square
//
//  Created by S M HEMEL on 3/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
#include <string>
using namespace std;
int main()
{
    int a[4];
    cin >> a[0] >> a[1] >> a[2] >> a[3];
    string str;
    cin >> str;
    long long sum = 0;
    for(int i=0; i<str.size(); i++)
        sum += a[str[i] - '1'];
    cout << sum << endl;
    return 0;
}
