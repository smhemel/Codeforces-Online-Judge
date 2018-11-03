//
//  main.cpp
//  Codeforces Round #305 (Div. 2) - A. Mike and Fax
//
//  Created by S M HEMEL on 2/28/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
bool is(string s)
{
    int len = (int)s.size();
    for(int i=0, j=len-1; i<=j; i++,j--)
        if(s[i]!=s[j])
            return false;
    return true;
}
int main()
{
    string s;
    int k;
    while(cin >> s >> k)
    {
        int len = (int)s.size();
        if(len % k != 0)
        {
            cout << "NO\n";
            continue;
        }
        k = len/k;
        bool ok = true;
        for(int i=0; i<len; i+=k)
        {
            if(!is(s.substr(i,k)))
            {
                cout << "NO\n";
                ok = false;
                break;
            }
        }
        if(ok)
            cout << "YES\n";
    }
    return 0;
}
