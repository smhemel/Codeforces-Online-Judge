//
//  main.cpp
//  Codeforces Beta Round #3 - A. Shortest path of the king
//
//  Created by S M HEMEL on 5/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
using namespace std;
string s,s1;
int row = 0,coloum=0,cnt=0,row1=0,coloum1=0;
int main()
{
    cin >> s >> s1;
    coloum = s[0]-'a';
    row = s[1]-'0';
    coloum1 = s1[0]-'a';
    row1 = s1[1]-'0';
    int c = coloum-coloum1;
    int r = row-row1;
    cnt = max(abs(c),abs(r));
    cout << cnt << endl;
    while(cnt--)
    {
        if(coloum<coloum1){
            putchar('R');
            coloum++;
        }
        if(coloum>coloum1){
            putchar('L');
            coloum--;
        }
        if(row<row1){
            putchar('U');
            row++;
        }
        if(row>row1){
            putchar('D');
            row--;
        }
        puts("");
    }
    return 0;
}
