//
//  main.cpp
//  Codeforces Round #385 (Div. 2) A. Hongcow Learns the Cyclic Shift
//
//  Created by S M HEMEL on 12/17/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
using namespace std;
map < string , int > a;
string s;
int x,y;
char q;
int main()
{
    cin >> s;
    int n=(int)s.size();
    a[s]=1;
    int ans=1;
    for (int i=1; i<=n; i++)
    {
        q=s[n-1];
        s.erase(n-1,1);
        s=q+s;
        if (!a.count(s))
            ans++;
        a[s]=1;
    }
    cout << ans <<endl;
}
