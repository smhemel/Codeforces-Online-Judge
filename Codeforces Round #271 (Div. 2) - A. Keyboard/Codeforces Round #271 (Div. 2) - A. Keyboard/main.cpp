//
//  main.cpp
//  Codeforces Round #271 (Div. 2) - A. Keyboard
//
//  Created by S M HEMEL on 3/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string a = "qwertyuiopasdfghjkl;zxcvbnm,./";
int main()
{
    char c;
    cin >> c;
    int dx = (c=='R') ? -1 : 1;
    string s;
    cin >> s;
    for(int i=0; i<s.size(); i++)
        cout << a[a.find(s[i])+dx];
    return 0;
}
