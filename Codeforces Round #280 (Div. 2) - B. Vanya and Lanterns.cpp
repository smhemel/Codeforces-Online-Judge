//
//  main.cpp
//  Codeforces Round #280 (Div. 2) - B. Vanya and Lanterns
//
//  Created by S M HEMEL on 21/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>
using namespace std;
int a[10000];
int main()
{
    int n,l;
    cin >> n >> l;
    for(int i=0; i<n; i++)
        cin >> a[i];
    sort(a,a+n);
    double ans = max(a[0],l-a[n-1]);
    for(int i=1; i<n; i++){
        ans = max(ans,((a[i]-a[i-1])/2.0));
    }
    printf("%.10lf\n",ans);
    return 0;
}
