//
//  main.cpp
//  Codeforces Round #284 (Div. 2) - B. Lecture
//
//  Created by S M HEMEL on 4/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <map>
using namespace std;
typedef long long lng;
int main()
{
    
    int n, m;
    while(cin >> n >> m)
    {
        string s,s1;
        map<string,string>mp;
        for(int i=0; i<m; i++)
        {
            cin >> s >> s1;
            int len1 = (int)s.size();
            int len2 = (int)s1.size();
            if(len1==len2)
                mp[s] = s;
            else if(len1>len2)
                mp[s] = s1;
            else
                mp[s]=s;
        }
        string s2;
        for(int i=0; i<n; i++)
        {
            if(i>0)
                cout<<" ";
            cin >> s2;
            cout << mp[s2];
        }
        cout<<endl;
    }
    return 0;
}
