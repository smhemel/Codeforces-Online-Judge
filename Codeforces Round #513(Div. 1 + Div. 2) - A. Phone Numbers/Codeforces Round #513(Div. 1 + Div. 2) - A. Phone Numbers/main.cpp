//
//  main.cpp
//  Codeforces Round #513(Div. 1 + Div. 2) - A. Phone Numbers
//
//  Created by S M HEMEL on 8/10/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s;
int main() {
    int n,cnt = 0;
    cin >> n;
    cin >> s;
    for (int i=0; i<n; i++){
        if(s[i]=='8')
            cnt++;
    }
    int div = n/11;
    cout << min(div,cnt) << endl;
    return 0;
}
