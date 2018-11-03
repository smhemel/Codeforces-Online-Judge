//
//  main.cpp
//  Codeforces Round #294 (Div. 2) - A. A and B and Chess
//
//  Created by S M HEMEL on 4/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
int main()
{
    int w = 0,b = 0;
    char c;
    for(int i=0; i<8; i++)
        for(int l=0; l<8; l++)
        {
            cin >> c;
            if(c=='q') b += 9;
            if(c=='Q') w += 9;
            if(c=='r') b += 5;
            if(c=='R') w += 5;
            if(c=='b') b += 3;
            if(c=='B') w += 3;
            if(c=='n') b += 3;
            if(c=='N') w += 3;
            if(c=='p') b += 1;
            if(c=='P') w += 1;
        }
    if(b==w)
        return puts("Draw");
    else if(b>w)
        return puts("Black");
    else
        return puts("White");
    return 0;
}
