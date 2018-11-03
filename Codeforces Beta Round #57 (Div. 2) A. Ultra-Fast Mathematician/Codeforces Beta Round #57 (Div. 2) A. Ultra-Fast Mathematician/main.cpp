//
//  main.cpp
//  Codeforces Beta Round #57 (Div. 2) A. Ultra-Fast Mathematician
//
//  Created by S M HEMEL on 12/9/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s, s1;
    while (getline(cin,s))
    {
        getline(cin,s1);
        int len = (int) s.size();
        for(int i=0; i<len;i++)
        {
            if(s[i]=='0' && s1[i]=='0') cout << "0";
            else if(s[i]=='1' && s1[i]=='1') cout << "0";
            else cout << "1";
        }
        cout <<endl;
    }
    return 0;
}
