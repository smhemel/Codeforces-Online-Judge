//
//  main.cpp
//  Codeforces Round #304 (Div. 2) - A. Soldier and Bananas
//
//  Created by S M HEMEL on 2/27/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
typedef long long ll;
int main()
{
    ll k, n, w;
    while(cin >> k >> n >> w)
    {
        ll total = k*((w + 1)*w)/2;
        if(total>n)
            cout << total-n << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}
