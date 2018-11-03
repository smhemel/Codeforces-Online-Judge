//
//  main.cpp
//  Codeforces Round #405 - A
//
//  Created by S M HEMEL on 3/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int main()
{
    long long int n1,m1,cnttt = 0;
    cin >> n1 >> m1;
    while (n1<=m1)
    {
        cnttt++;
        n1 = n1*3;
        m1 = m1*2;
    }
    cout << cnttt << endl;
    return 0;
}
