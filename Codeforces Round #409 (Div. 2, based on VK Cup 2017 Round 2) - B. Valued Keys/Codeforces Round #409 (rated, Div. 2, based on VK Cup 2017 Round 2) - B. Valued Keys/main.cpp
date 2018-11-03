//
//  main.cpp
//  Codeforces Round #409 (rated, Div. 2, based on VK Cup 2017 Round 2) - B. Valued Keys
//
//  Created by S M HEMEL on 4/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
using namespace std;
string s,s1,z;
int main()
{
    z = "";
    cin >> s >> s1;
    int len = (int)s.length();
    for(int i=0; i<len; i++){
        if(s1[i]>s[i])
            return 0 * puts("-1");
        z += (char)(min(s[i],s1[i]));
    }
    cout << z << endl;
    return 0;
}
