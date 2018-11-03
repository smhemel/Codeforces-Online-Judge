//
//  main.cpp
//  Good Bye 2016 B
//
//  Created by S M HEMEL on 12/30/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char s[25];
    int n,t,north = 0,south = 0,count=0,count1=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> t >> s;
        if(s[0]=='N'){
            north+=t;
            count++;
        }
        if(s[0]=='S'){
            south+=t;
            count1++;
        }
    }
    if(north==south && (count>1 || count1>1)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}
