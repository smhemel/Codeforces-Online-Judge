//
//  main.cpp
//  Codeforces Beta Round #89 (Div. 2) - A. String Task
//
//  Created by S M HEMEL on 2/24/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;
string s;
int main()
{
    cin >> s;
    int len = (int) s.length();
    for(int i=0; i<len; i++)
    {
        char c = tolower(s[i]);
        if(c== 'a' || c== 'e' ||  c== 'i' || c== 'o' || c== 'u' || c=='y')
            s[i] = 0;
        if(s[i]!=0)
            printf(".%c",c);
    }
    cout << endl;
    return 0;
}
