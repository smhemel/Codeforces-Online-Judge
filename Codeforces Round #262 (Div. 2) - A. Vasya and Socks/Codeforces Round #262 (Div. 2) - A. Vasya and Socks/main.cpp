//
//  main.cpp
//  Codeforces Round #262 (Div. 2) - A. Vasya and Socks
//
//  Created by S M HEMEL on 2/20/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        if(i%m==0)
            n++;
    cout << n << endl;
    return 0;
}
