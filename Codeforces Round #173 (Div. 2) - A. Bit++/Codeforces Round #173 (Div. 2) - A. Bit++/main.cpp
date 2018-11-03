//
//  main.cpp
//  Codeforces Round #173 (Div. 2) - A. Bit++
//
//  Created by S M HEMEL on 3/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    int n,c = 0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> s;
        if(s[1]=='+') c++;
        else c--;
    }
    cout << c << endl;
    return 0;
}
