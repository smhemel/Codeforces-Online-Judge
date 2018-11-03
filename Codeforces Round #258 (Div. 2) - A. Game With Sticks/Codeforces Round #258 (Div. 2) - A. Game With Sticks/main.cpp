//
//  main.cpp
//  Codeforces Round #258 (Div. 2) - A. Game With Sticks
//
//  Created by S M HEMEL on 2/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,m,ans = 0;
    cin >> n >> m;
    ans = n>m ? m : n;
    cout << ((ans%2==0) ? "Malvika" : "Akshat") << endl;
    return 0;
}
