//
//  main.cpp
//  Educational Codeforces Round 26
//
//  Created by S M HEMEL on 3/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>
using namespace std;
string s;
int main()
{
    int n,Max = 0,cnt=0;
    cin >> n;
    cin.ignore();
    getline(cin,s);
    for(int i=0; i<n; i++){
        if(s[i]==' '){
            cnt = 0;
            continue;
        }
        if(isupper(s[i])) cnt++;
        if(Max<cnt) Max = cnt;
    }
    cout << Max << endl;
    return 0;
}
