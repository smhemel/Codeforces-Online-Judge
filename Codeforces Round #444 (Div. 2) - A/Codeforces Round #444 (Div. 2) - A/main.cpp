//
//  main.cpp
//  Codeforces Round #444 (Div. 2) - A
//
//  Created by S M HEMEL on 3/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <cstdio>
using namespace std;
string s;
int main(){
    cin >> s;
    int cnt = 0,j = -1;
    for(int i=0; s[i]; i++){
        if(s[i]=='1')
            j = i;
        if(j!=-1 && s[i]=='0')
            cnt++;
    }
    if(cnt>=6 && j!=-1){
        puts("yes");
    }
    else puts("no");
    return 0;
}
