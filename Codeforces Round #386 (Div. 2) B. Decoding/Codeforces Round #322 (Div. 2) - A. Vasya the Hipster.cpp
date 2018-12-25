//
//  main.cpp
//  Codeforces Round #322 (Div. 2) - A. Vasya the Hipster
//
//  Created by S M HEMEL on 21/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,sum = 0;
    cin >> n >> m;
    int wear =  min(n,m);
    sum = n+m-(min(n,m)*2);
    cout << wear << " " << (int)(sum/2) << endl;
    return 0;
}
