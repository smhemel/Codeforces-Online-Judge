//
//  main.cpp
//  Educational Codeforces Round 25 - A
//
//  Created by S M HEMEL on 7/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
string s,s1;
int main()
{
    int n,cnt=0;
    bool f = true,f1 = true;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++){
        if(s[i]=='0' && !f){
            if(!f1)
                continue;
            cout << "0";
            f1 = false;
            continue;
        }
        if(s[i]=='1'){
            f1 = true;
            f = true;
            cnt++;
            continue;
        }
        if(s[i]=='0' && f)
        {
            f = false;
            f1 = true;
            cout << cnt;
            cnt = 0;
        }
    }
    if(cnt!=0)
        cout << cnt << endl;
    return 0;
}
