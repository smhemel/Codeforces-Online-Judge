//
//  main.cpp
//  Codeforces Round #349 (Div. 2) - A. Pouring Rain
//
//  Created by S M HEMEL on 2/25/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    double a,b,c,d;
    cin >> a  >> b >> c >> d;
    double t = 3.1415926*(a/2)*(a/2);
    c /= t;
    if(d-c>= 0) puts("NO");
    else
    {
        cout << "YES" << endl;
        cout << b/(c-d) << endl;
    }
    return 0;
}
