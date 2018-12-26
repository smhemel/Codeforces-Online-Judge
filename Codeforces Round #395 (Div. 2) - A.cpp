//
//  main.cpp
//  Codeforces Round #395 (Div. 2) - A
//
//  Created by S M HEMEL on 2/2/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,z;
    cin >> n >> m >> z;
    cout<<z/(n*m/__gcd(n,m))<<endl;
    return 0;
}
