//
//  main.cpp
//  Codeforces Round #360 (Div. 2), problem: (A) Opponents
//
//  Created by S M HEMEL on 1/25/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#define ll long long
#define ull unsigned long long
using namespace std;

int main()
{
    int n,d;
    cin >> n >> d;
    string h = "";
    for(int i=0;i<n;i++)
        h += '1';
    int mx = 0;
    int loc = 0;
    while(d--)
    {
        string t;
        cin >> t;
        if(t == h)
            loc = 0;
        else
            loc++;
        mx = max(loc, mx);
    }
    cout << mx;
}
