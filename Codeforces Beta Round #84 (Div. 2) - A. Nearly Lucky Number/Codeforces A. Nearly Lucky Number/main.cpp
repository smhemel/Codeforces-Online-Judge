//
//  main.cpp
//  Codeforces A. Nearly Lucky Number
//
//  Created by S M HEMEL on 11/23/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
int main()
{
    char s[1000];
    int count = 0;
    while (cin >> s)
    {
        int len = (int)strlen(s);
        count = 0;
        for (int i=0; i<len; i++)
            if(s[i]=='4' || s[i]=='7')
                count++;
        if(count == 4 || count == 7)
            cout << "YES" <<endl;
        else
            cout << "NO" <<endl;
    }
    
}
