//
//  main.cpp
//  Codeforces Round #410 (Div. 2) - A
//
//  Created by S M HEMEL on 4/21/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <cstdio>
using namespace std;
int main()
{
    string str;
    str.clear();
    cin >> str;
    int len = (int)str.length();
    if(len==1)
        return 0 * puts("YES");
    int div = len/2;
    int cnt = 0;
    for(int i=0,l=len-1; i<div; i++,l--){
        if(str[i]!=str[l])
            cnt++;
    }
    if(len&1 && !cnt)
        return 0 * puts("YES");
    else if(cnt==1)
        return 0 * puts("YES");
    else
        puts("NO");
    return 0;
}
