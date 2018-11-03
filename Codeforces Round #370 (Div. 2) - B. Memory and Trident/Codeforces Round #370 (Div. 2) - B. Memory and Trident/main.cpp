//
//  main.cpp
//  Codeforces Round #370 (Div. 2) - B. Memory and Trident
//
//  Created by S M HEMEL on 4/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string s;
int main()
{
    while (cin >> s)
    {
        int x=0,y=0;
        if(s.size()&1)
            return 0 * puts("-1");
        for(auto i : s){
            if(i=='R') x++;
            if(i=='L') x--;
            if(i=='U') y++;
            if(i=='D') y--;
        }
        cout << abs(abs(x)+abs(y))/2 << endl;
    }
    return 0;
}
