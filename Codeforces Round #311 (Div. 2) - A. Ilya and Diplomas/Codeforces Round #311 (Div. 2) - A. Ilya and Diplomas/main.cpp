//
//  main.cpp
//  Codeforces Round #311 (Div. 2) - A. Ilya and Diplomas
//
//  Created by S M HEMEL on 3/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <vector>
#include <utility>
using namespace std;
int main()
{
    int n,a,b,c,d,e,f;
    cin >> n;
    cin >> a >> b >> c >> d >> e >> f;
    int x = min(b,n-c-e);
    int y = min(d,n-e-x);
    cout << x << " " << y << " " << n-(x+y) << endl;
    return 0;
}
