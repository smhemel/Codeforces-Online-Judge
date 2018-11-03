//
//  main.cpp
//  Codeforces Beta Round #96 (Div. 2), problem: (A) HQ9+
//
//  Created by S M HEMEL on 12/11/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//
#include <iostream>
#include <string>
using namespace std;
int main ()
{
    string s ;
    cin >> s ;
    string ans = "NO" ;
    for (int i=0; i<s.length(); ++i)
    {
        if (s[i] == 'H' or s[i] == 'Q' or s[i] == '9')
            ans = "YES" ;
    }
    cout << ans << endl ;
    return 0;
}
