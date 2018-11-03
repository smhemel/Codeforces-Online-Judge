//
//  main.cpp
//  Codeforces Round #344 (Div. 2) - A. Interview
//
//  Created by S M HEMEL on 3/26/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[1111],b[1111];
int main()
{
    int n,ans=0;
    cin >> n;
    for(int i=0; i<n; cin >> a[i],i++);
    for(int i=0; i<n; cin >> b[i],i++);
    for(int i=0; i<n; i++)
    {
        int x = a[i], y = b[i];
        ans = max(ans,x+y);
        for(int j=i+1; j<n; j++)
        {
            x |= a[j];
            y |= b[j];
        }
        ans = max(ans, x + y);
    }
    cout << ans << endl;
    return 0;
}
