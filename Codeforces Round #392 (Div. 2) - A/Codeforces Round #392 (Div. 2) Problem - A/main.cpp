//
//  main.cpp
//  Codeforces Round #392 (Div. 2) Problem - A
//
//  Created by S M HEMEL on 1/19/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//


#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n,a[1000];
    cin >> n;
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a,a+n);
    int x = a[n-1];
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        sum += x-a[i];
    }
    cout << sum << endl;
    return 0;
}
