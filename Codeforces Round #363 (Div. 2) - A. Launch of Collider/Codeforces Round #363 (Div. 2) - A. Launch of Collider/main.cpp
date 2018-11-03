//
//  main.cpp
//  Codeforces Round #363 (Div. 2) - A. Launch of Collider
//
//  Created by S M HEMEL on 3/28/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s;
int a[200000];
int main()
{
    int n,mn = INT_MAX;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; cin >> a[i],i++);
    for(int i=0; i<n-1; i++)
        if(s[i]=='R' && s[i+1]=='L')
            mn = min(mn,(a[i+1]-a[i]));
    if(mn==INT_MAX)
        return 0 * puts("-1");
    else
        cout << mn/2 << endl;
    return 0;
}
