//
//  main.cpp
//  Codeforces Round #310 (Div. 2) - A. Case of the Zeros and Ones
//
//  Created by S M HEMEL on 2/27/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s;
int main()
{
    long int cnt=0,cnt1=0,len;
    cin >> len;
    cin >> s;
    for(int i=0; i<len; i++)
    {
        if(s[i]=='1')
            cnt++;
        if(s[i]=='0')
            cnt1++;
    }
    cout << len-min(cnt,cnt1)*2 << endl;
    return 0;
}
