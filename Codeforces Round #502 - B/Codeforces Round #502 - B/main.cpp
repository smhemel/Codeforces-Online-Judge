//
//  main.cpp
//  Codeforces Round #502 - B
//
//  Created by S M HEMEL on 8/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s,s1;
int main() {
    int n,cnt = 0,one = 0,zo = 0;
    cin >> n >> s >> s1;
    for(int i=0; i<n; i++){
        if(s[i]=='1') one++;
        if(s[i]=='0' && s1[i]=='1') zo++;
    }
    for(int i=0; i<n; i++)
        if(s[i]=='0' && s1[i]=='0')
            cnt += one;
    for(int i=0; i<n; i++)
        if(s[i]=='1' && s1[i]=='0')
            cnt += zo;
    cout << cnt << endl;
    return 0;
}
