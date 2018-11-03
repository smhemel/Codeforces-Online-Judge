//
//  main.cpp
//  Codeforces Round #107 (Div. 2), (A) Soft Drinking
//
//  Created by S M HEMEL on 12/9/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int limes = c*d;
    int millis = k*l;
    int toasts = min(millis/nl,min(limes,p/np));
    cout << toasts / n << endl;
    return 0;
}
