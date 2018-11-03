//
//  main.cpp
//  Codeforces Round #376 (Div. 2) - A. Night at the Museum
//
//  Created by S M HEMEL on 4/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s;
int main()
{
    string s;
    while(cin >> s)
    {
        //int len = (int) s.length();
        int ans = 0;
        char curr = 'a';
        for(int i=0; s[i]; i++)
        {
            ans += min(abs(curr - s[i]), abs(26 - abs(curr - s[i])));
            curr = s[i];
        }
        cout << ans << endl;
    }
    return 0;
}
