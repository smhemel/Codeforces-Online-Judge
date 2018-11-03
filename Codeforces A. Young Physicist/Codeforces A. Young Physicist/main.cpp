//
//  main.cpp
//  Codeforces A. Young Physicist
//
//  Created by S M HEMEL on 11/23/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int a,b,c,x,y,z;
int main()
{
    cin >> x;
    while (cin>>x>>y>>z)
        a += x, b += y, c += z;
    cout << (a || b || c ? "NO" : "YES");
}
