//
//  main.cpp
//  Codeforces Round #301 (Div. 2) - A. Combination Lock
//
//  Created by S M HEMEL on 3/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string s,s1;
int main()
{
    int n,total=0;
    cin >> n >> s >> s1;
    for(int i=0; i<n; i++)
    {
        int t = s[i]-'0';
        int t1 = s1[i]-'0';
        if(t==t1)
            continue;
        if(abs(t-t1)>5)
            total += 10-abs(t-t1);
        else
            total += abs(t-t1);
    }
    cout << total << endl;
    return 0;
}
