//
//  main.cpp
//  Codeforces Round #266 (Div. 2) - A. Cheap Travel
//
//  Created by S M HEMEL on 2/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int r1 = n*a;
    int r2 = 0;
    if(n<=m){
        r2 = b;
        n = 0;
    }
    while(n>=m)
    {
        r2 = r2+b;
        n -= m;
    }
    if(n<=0)
        cout << min(r2,r1) << endl;
    else
    {
        r2 += (a<b) ? a*n : b;
        cout << min(r1,r2) << endl;
    }
    return 0;
}
