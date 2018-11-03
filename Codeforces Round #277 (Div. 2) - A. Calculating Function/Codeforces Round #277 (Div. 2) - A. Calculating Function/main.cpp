//
//  main.cpp
//  Codeforces Round #277 (Div. 2) - A. Calculating Function
//
//  Created by S M HEMEL on 3/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    long long int n,m = 0;
    cin >> n;
    m = n/2;
    if(n&1) m = m-n;
    cout << m << endl;
    return 0;
}
