//
//  main.cpp
//  Educational Codeforces Round 32 - C. K-Dominant Character
//
//  Created by S M HEMEL on 9/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <map>
#include <vector>
using namespace std;
string s;
int main(){
    cin >> s;
    int len  = (int)s.size();
    for(char c='a'; c<='z' ; c++){
        int k = -1,i=0,ans=0;
        for(; s[i]; i++){
            if(s[i]==c){
                ans = max(ans,i-k);
                k = i;
            }
        }
        ans = max(ans,i-k);
        len = min(len,ans);
    }
    cout << len << endl;
    return 0;
}
