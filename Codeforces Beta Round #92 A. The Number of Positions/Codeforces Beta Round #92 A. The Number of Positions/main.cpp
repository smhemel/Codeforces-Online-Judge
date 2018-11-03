//
//  main.cpp
//  Codeforces Beta Round #92 A. The Number of Positions
//
//  Created by S M HEMEL on 11/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n, a, b;
    int count = 0;
    cin >> n >> a >> b;
    for(int i=1; i<=n; i++)
        if(i>a && i+b >= n)
            count ++;
    cout << count << endl;
    return 0;
}
