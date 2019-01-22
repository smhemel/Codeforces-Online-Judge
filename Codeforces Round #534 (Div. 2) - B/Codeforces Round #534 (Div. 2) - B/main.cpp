//
//  main.cpp
//  Codeforces Round #534 (Div. 2) - B
//
//  Created by S M HEMEL on 22/1/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#define ll long long int
using namespace std;
string s;
int main() {
    cin >> s;
    int f = 0;
    for(int i=0,j=0; s[i]; i++){
        if(j) {
            if (s[i]==s[j-1]) j--, f ^=1;
            else s[j++] = s[i];
            
        } else s[j++] = s[i];
    }
    if(f) puts("YES");
    else puts("No");
    return 0;
}
