//
//  main.cpp
//  Codeforces Round #350 (Div. 2) - A. Holidays
//
//  Created by S M HEMEL on 2/25/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = n/7;
    if(!(n%7))
    {
        cout << x+x << " " << x+x << endl;
        return 0;
    }
    int r = n%7;
    if(r==6)
    {
        cout << x+x+1 << " " << x+x+2 << endl;
        return 0;
    }
    if(r==1)
        cout << 2*x << " " << x+x+1 << endl;
    else
        cout << 2*x << " " << x+x+2 << endl;
    return 0;
}
