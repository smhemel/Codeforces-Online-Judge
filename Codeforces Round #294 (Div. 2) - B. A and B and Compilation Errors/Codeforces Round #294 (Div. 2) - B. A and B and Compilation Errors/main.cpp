//
//  main.cpp
//  Codeforces Round #294 (Div. 2) - B. A and B and Compilation Errors
//
//  Created by S M HEMEL on 4/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int a = 0, b = 0, c = 0, in;
        for(int i=0; i<n; i++) {
            cin >> in;
            a += in;
        }
        for(int i=1; i<n; i++) {
            cin >> in;
            b += in;
        }
        for(int i=2; i<n; i++) {
            cin >> in;
            c += in;
        }
        cout << a-b << endl << b-c << endl;
    }
    return 0;
}
