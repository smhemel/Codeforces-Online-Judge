//
//  main.cpp
//  Codeforces Round #528 (Div. 2) - A
//
//  Created by S M HEMEL on 24/12/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
string s,ans;
int main() {
    cin >> s;
    int n = (int)s.size();
    for(int i=0; i<n; i++){
        if(i&1)
            ans += s[(n-1)/2+(i+1)/2];
        else
            ans += s[(n-1)/2-(i+1)/2];
    }
    
    cout << ans << endl;
    return 0;
}
