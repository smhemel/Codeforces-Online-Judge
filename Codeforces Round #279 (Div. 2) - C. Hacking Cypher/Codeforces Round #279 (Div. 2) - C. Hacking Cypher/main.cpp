//
//  main.cpp
//  Codeforces Round #279 (Div. 2) - C. Hacking Cypher
//
//  Created by S M HEMEL on 7/14/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int a, b,p = 1, i, rem[1000005];
int main(){
    string s;
    cin >> s;
    int len = (int)s.length();
    cin >> a >> b;
    for(int i = len-1; i>=0; i--){
        rem[i] = ((s[i]-'0')*p + rem[i+1])%b;
        p = (p*10)%b;
    }
    p = 0;
    for(int i=1; i<len; i++){
        p = (p*10 + s[i-1]-'0')%a;
        if (!p && !rem[i] && s[i] != '0'){
            puts("YES");
            cout << s.substr(0,i) << endl << s.substr(i, len) <<endl;
            return 0;
        }
    }
    puts("NO");
    return 0;
}
