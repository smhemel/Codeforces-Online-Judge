//
//  main.cpp
//  Codeforces Round #223 (Div. 2) - A. Sereja and Dima
//
//  Created by S M HEMEL on 4/3/17.
//  Copyright © 2017 Bangladesh University of Business and Technology. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[1000],ans[2];
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k=0;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],i++);
    int i = 0,l = n-1;
    while (i<=l)
    {
        if(a[i]>a[l]) {
            ans[k] += a[i];
            i++;
        }
        else {
            ans[k] += a[l];
            l--;
        }
        k = (k+1)%2;
    }
    cout << ans[0] << " " <<ans[1] << endl;
    return 0;
}
