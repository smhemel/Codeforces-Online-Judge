//
//  main.cpp
//  Codeforces Round #380 (Div. 2,
//
//  Created by S M HEMEL on 11/22/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for (int i=0;i<n;i++)
    {
        if (s[i]=='o'&&s[i+1]=='g'&&s[i+2]=='o')
        {
            cout<<"***";
            i+=2;
            while (s[i+1]=='g'&&s[i+2]=='o')
                i+=2;
        }
        else
            cout<<s[i];
    }
}
