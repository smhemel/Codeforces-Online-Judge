//
//  main.cpp
//  RookieRank 3 - Comparing Times
//
//  Created by S M HEMEL on 5/6/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s,s1;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        cin >> s >> s1;
        if(s[5]!=s1[5]){
            if(s[5]=='A')
                puts("First");
            else
                puts("Second");
        }
        else{
            int d1 = (((s[0]-'0')*10+(s[1]-'0'))*60)+((s[3]-'0')*10+(s[4]-'0'));
            int d2 = (((s1[0]-'0')*10+(s1[1]-'0'))*60)+((s1[3]-'0')*10+(s1[4]-'0'));
            if(d2<d1)
                puts("Second");
            else
                puts("First");
        }
    }
    return 0;
}
