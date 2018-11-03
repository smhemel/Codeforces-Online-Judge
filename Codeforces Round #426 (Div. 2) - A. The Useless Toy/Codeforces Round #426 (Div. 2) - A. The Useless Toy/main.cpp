//
//  main.cpp
//  Codeforces Round #426 (Div. 2) - A. The Useless Toy
//
//  Created by S M HEMEL on 24/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include<iostream>
#include<string>
using namespace std;
int main()
{
    char a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    string c1 = "^>v<^>v<", c2 = "^<v>^<v>";
    n = n % 4;
    bool b1 = false, b2 = false;
    for(int i=0; i<4; i++)
    {
        if(c1[i]==a && c1[i+n]==b) b1 = true;
        if(c2[i]==a && c2[i+n]==b) b2 = true;
    }
    if(b1 && b2) cout << "undefined";
    else if (b1) cout << "cw";
    else cout << "ccw";
    return 0;
}
