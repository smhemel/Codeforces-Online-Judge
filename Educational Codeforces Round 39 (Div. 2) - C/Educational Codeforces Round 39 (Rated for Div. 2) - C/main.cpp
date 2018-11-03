//
//  main.cpp
//  Educational Codeforces Round 39 (Rated for Div. 2) - C
//
//  Created by S M HEMEL on 6/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;
int main()
{
    string str;
    cin >> str;
    char c='a';
    int count=0;
    int len = (int)str.size();
    for(int i=0; i<len; i++)
    {
        if(count>=26) break;
        if(str[i]==c)
        {
            count++;
            c = char(int(c)+1);
        }
        else if(str[i]>c) continue;
        else
        {
            str[i] = c;
            c = char(int(c)+1);
            count++;
        }
    }
    if(count>=26) cout << str << endl;
    else puts("-1");
    return 0;
}
