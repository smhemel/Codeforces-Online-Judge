//
//  main.cpp
//  Codeforces Round #504 (rated, Div. 1 + Div. 2) - A
//
//  Created by S M HEMEL on 18/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main() {
    int n,m;
    string s,s1;
    cin >> n >> m;
    cin >> s >> s1;
    int f = 0;
    for(int i=0; s[i]; i++){
        if(s[i]=='*') {
            f = 1;
            break;
        }
        if(s[i]!=s1[i]) return 0 * puts("NO");
    }
    for(int k=(int)s.size(),j=(int)s1.size(); k>0 || j>0; k--,j--){
        if(s[k]=='*') break;
        if(s[k]!=s1[j]) return 0 * puts("NO");
    }
    if(!f && s.size()<s1.size()) return 0 * puts("NO");
    if((int)s.size()-f>(int)s1.size()) return 0 * puts("NO");
    puts("YES");
    return 0;
}
