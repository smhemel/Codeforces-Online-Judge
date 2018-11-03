//
//  main.cpp
//  Codeforces Round #189 A. Magic Numbers
//
//  Created by S M HEMEL on 11/27/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[100000];
    while (cin >> s)
    {
        if (s[0]!='1')
            cout << "NO" <<endl;
        else
        {
            bool check = false;
            int len = (int) strlen(s);
            int i = 0;
            for (; i<len;)
            {
            
                if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4')
                    i+=3;
                else if (s[i]=='1' && s[i+1]=='4')
                    i+=2;
                else if (s[i]=='1')
                    i++;
                else
                {
                    i++;
                    check = true;
                }
            }
            if(check==false)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }
    return 0;
}
