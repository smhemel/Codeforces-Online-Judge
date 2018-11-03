//
//  main.cpp
//  Codeforces Beta Round #54 (A) Chat room
//
//  Created by S M HEMEL on 11/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
string s;
int main()
{
    cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='h')
            for(int j=i+1;j<s.length();j++)
            {
                if(s[j]=='e')
                    for(int k=j+1;k<s.length();k++)
                    {
                        if(s[k]=='l')
                            for(int f=k+1;f<s.length();f++)
                            {
                                if(s[f]=='l'){
                                    for(int l=f+1;l<s.length();l++)
                                    {
                                        if(s[l]=='o')
                                        {
                                            cout<<"YES";
                                            return 0;
                                        }
                                    }
                                }
                            }
                    }
            }
    }
    cout<<"NO";
    return 0;
}
