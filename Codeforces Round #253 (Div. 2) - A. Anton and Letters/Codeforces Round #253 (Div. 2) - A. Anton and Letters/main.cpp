//
//  main.cpp
//  Codeforces Round #253 (Div. 2) - A. Anton and Letters
//
//  Created by S M HEMEL on 3/27/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;
map <char,int> M;
set <char> ss;
string s;
int main()
{
    getline(cin,s);
    for(int i=0; s[i]; i++)
        if(s[i]>='a' && s[i]<='z')
            ss.insert(s[i]);
    cout << ss.size() << endl;
    return 0;
}
