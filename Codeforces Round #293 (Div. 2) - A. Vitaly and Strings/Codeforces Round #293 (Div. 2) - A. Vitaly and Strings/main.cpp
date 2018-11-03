//
//  main.cpp
//  Codeforces Round #293 (Div. 2) - A. Vitaly and Strings
//
//  Created by S M HEMEL on 4/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<iostream>
#include<algorithm>
#include<vector>
#include<string.h>
using namespace std;
int main()
{
    string s, t;
    cin >> s >> t;
    string target = s;
    for(int i = (int)s.size()-1; i>=0; i--)
    {
        if(target[i] == 'z')
            target[i] = 'a';
        else {
            target[i] = target[i]+1;
            break;
        }
    }
    if(target<t)
        cout << target << endl;
    else
        cout<<"No such string"<<endl;
    return 0;
}
