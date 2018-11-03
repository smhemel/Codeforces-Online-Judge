//
//  main.cpp
//  Codeforces Round #197 (Div. 2) - B. Xenia and Ringroad
//
//  Created by S M HEMEL on 5/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#define ll long long
using namespace std;
int main()
{
    ll n,m;
    cin >> n >> m;
    ll arr[m+1];
    ll t=1, cnt=0;
    for(ll i=0; i<m; i++)
    {
        cin >> arr[i];
        if(arr[i]<t)
            cnt += arr[i]+n-t;
        else
            cnt+=arr[i]-t;
        t = arr[i];
    }
    cout << cnt << endl;
}
