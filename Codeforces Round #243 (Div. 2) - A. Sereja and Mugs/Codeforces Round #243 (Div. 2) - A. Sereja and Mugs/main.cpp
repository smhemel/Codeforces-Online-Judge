//
//  main.cpp
//  Codeforces Round #243 (Div. 2) - A. Sereja and Mugs
//
//  Created by S M HEMEL on 4/2/17.
//  Copyright © 2017 Bangladesh University of Business and Technology. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[10000];
int main()
{
    int n,m,sum = 0;
    cin >> n >> m;
    for(int i=0; i<n; cin >> a[i],sum += a[i],i++);
    sort(a,a+n);
    sum -= a[n-1];
    if(sum<=m)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
