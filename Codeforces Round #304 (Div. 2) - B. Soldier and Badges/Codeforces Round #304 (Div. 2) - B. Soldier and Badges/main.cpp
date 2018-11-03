//
//  main.cpp
//  Codeforces Round #304 (Div. 2) - B. Soldier and Badges
//
//  Created by S M HEMEL on 4/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a,a+n);
    int cnt = 0;
    for(int i=1; i<n; i++)
    {
        if(a[i-1]>=a[i]){
            cnt += (a[i-1]-a[i])+1;
            a[i] = a[i-1]+1;
        }
    }
    cout << cnt << endl;
    return 0;
}
