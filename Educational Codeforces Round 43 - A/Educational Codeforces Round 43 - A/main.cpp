//
//  main.cpp
//  Educational Codeforces Round 43 - A
//
//  Created by S M HEMEL on 1/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int n,cnt;
string s;
int main() {
    cin >> n;
    cin >> s;
    bool f = false;
    for(int i=0; s[i]; i++){
        if(s[i]=='0') cnt++;
        else f = true;
    }
    if(f) cout << "1";
    for(int i=0; i<cnt; i++)
        cout << "0";
    cout << endl;
    return 0;
}
