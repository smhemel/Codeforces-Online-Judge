//
//  main.cpp
//  Codeforces Beta Round #40 (Div. 2) A. Translation
//
//  Created by S M HEMEL on 12/11/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <stdio.h>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    string s1 ,s2 ;
    while(cin >> s1 >> s2)
    {
        int flag=0;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]==s2[s1.size()-i-1]) ;
            else
                flag=1;
        }
        if(flag)
            puts("NO");
        else
            puts("YES");
    }
    return 0;
}
