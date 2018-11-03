//
//  main.cpp
//  Intel Code Challenge Elimination Round (Div. 1 + Div. 2) - A. Broken Clock
//
//  Created by S M HEMEL on 3/11/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    while(scanf("%d", &n)== 1)
    {
        string s;
        cin >> s;
        int h = (s[0] - '0') * 10 + s[1] - '0';
        int m = s[3] - '0';
        if(m > 5)
            s[3] = '0';
        if(n == 24){
            if(h > 23)
                s[0] = '0';
        }
        else
        {
            if(h > 12)
            {
                if(s[1] != '0')
                    s[0] = '0';
                else
                    s[0] = '1';
            }
            if(!h)
                s[0] = '1';
        }
        cout << s << endl;
    }
    return 0;
}
