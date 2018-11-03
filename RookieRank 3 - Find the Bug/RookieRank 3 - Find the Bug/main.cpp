//
//  main.cpp
//  RookieRank 3 - Find the Bug
//
//  Created by S M HEMEL on 5/6/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s;
int main()
{
    int n,p=0,p1=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s;
        for(int l=0; s[l]; l++)
            if(s[l]=='X')
                p = i, p1 = l;
    }
    cout << p <<"," << p1 << endl;
    return 0;
}
