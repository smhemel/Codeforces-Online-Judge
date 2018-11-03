//
//  main.cpp
//  Codeforces Round #163 B. Queue at the School
//
//  Created by S M HEMEL on 11/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int t,n;
    cin>> n >> t;
    string s;
    cin >> s;
    while(t--)
    {
        string z=s;
        for(int i=0; i+1<s.length(); i++)
            if(s[i]=='B' && s[i+1]=='G'){
                swap(z[i],z[i+1]);
            }
        s = z;
    }
    cout<<s<<endl;
    return 0;
}
