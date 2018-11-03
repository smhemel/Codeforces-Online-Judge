//
//  main.cpp
//  Codeforces Round #472 (Div. 2) - A
//
//  Created by S M HEMEL on 24/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <cstring>
#define ll long long int
using namespace std;
string s;
int main() {
    int n;
    cin >> n;
    cin >> s;
    for(int i=0; s[i]; i++){
        if(s[i]!='?' && s[i]==s[i+1])
            return 0 * puts("No");
    }
    for(int i=0; s[i]; i++){
        if(i!=0 && i!=s.size()-1){
            if(s[i]=='?'){
                if(s[i+1]=='?')
                    return 0 * puts("Yes");
                if(s[i-1]==s[i+1])
                    return 0 * puts("Yes");
            }
        }
        else if(i==0 || i==s.size()-1){
            if(s[i]=='?')
                return 0 * puts("Yes");
        }
    }
    puts("No");
    return 0;
}
