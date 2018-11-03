//
//  main.cpp
//  Codeforces Round #206 (Div. 2) - A. Vasya and Digital Root
//
//  Created by S M HEMEL on 3/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int k, d;
    cin >> k >> d;
    if (d == 0 && k > 1)
        cout << "No solution";
    else
    {
        cout << d;
        for(int i=0; i<k-1; i++)
            cout << 0;
    }
    return 0;
}
