//
//  main.cpp
//  Codeforces Round #238 (Div. 2) - A. Gravity Flip
//
//  Created by S M HEMEL on 3/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[1000];
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],i++);
    sort(a,a+n);
    cout << a[0];
    for(int i=1; i<n; cout << " " << a[i],i++);
    cout << endl;
    return 0;
}
