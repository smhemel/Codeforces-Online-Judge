//
//  main.cpp
//  Educational Codeforces Round 16 - B. Optimal Point on a Line
//
//  Created by S M HEMEL on 4/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
int a[300010];
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],i++);
    sort(a,a+n);
    if(n&1)
        n = (n/2)+1;
    else
        n/=2;
    cout << a[n-1] << endl;
    return 0;
}
