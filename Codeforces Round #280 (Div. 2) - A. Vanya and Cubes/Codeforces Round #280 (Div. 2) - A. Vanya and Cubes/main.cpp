//
//  main.cpp
//  Codeforces Round #280 (Div. 2) - A. Vanya and Cubes
//
//  Created by S M HEMEL on 3/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,cnt=1,m=1,m1=1,i=1;
    cin >> n;
    while (true)
    {
        i++;
        m1 = (m1+i);
        m += m1;
        if(m>n) break;
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
