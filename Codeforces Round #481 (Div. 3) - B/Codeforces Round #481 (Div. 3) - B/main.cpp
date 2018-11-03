//
//  main.cpp
//  Codeforces Round #481 (Div. 3) - B
//
//  Created by S M HEMEL on 13/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
string s;
int main() {
    int n;
    cin >> n;
    cin >> s;
    int cnt  = 0;
    int len = (int)s.size();
    for(int i=0; i<len-2; i++){
        if(s[i]=='x' && s[i+1]=='x' && s[i+2]=='x')
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}
