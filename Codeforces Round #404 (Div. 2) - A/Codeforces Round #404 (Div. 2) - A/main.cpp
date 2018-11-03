//
//  main.cpp
//  Codeforces Round #404 (Div. 2) - A
//
//  Created by S M HEMEL on 3/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,ans = 0;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if(s[0]=='C')
            ans+=6;
        if(s[0]=='I')
            ans+=20;
        if(s[0]=='D')
                ans+=12;
        if(s[0]=='O')
            ans+=8;
        if(s[0]=='T')
            ans+=4;
    }
    cout << ans << endl;
    return 0;
}
