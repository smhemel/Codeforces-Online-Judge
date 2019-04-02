//
//  main.cpp
//  Codeforces Round #550 (Div. 3) - A
//
//  Created by S M HEMEL on 2/4/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        int len = s.size();
        bool f = true;
        sort(s.begin(), s.end());
        for(int i=1; i<len; i++){
            int c = s[0]+i;
            int ch = s[i];
            if(c!=ch){
                puts("No");
                f = false;
                break;
            }
        }
        if(f) puts("Yes");
    }
    return 0;
}
