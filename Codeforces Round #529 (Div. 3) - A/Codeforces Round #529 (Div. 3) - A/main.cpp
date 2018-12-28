//
//  main.cpp
//  Codeforces Round #529 (Div. 3) - A
//
//  Created by S M HEMEL on 27/12/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s;
int main() {
    int n,x=0;
    cin >> n >> s;
    for(int i=0; i+x<n; i+=x)
    {
        cout << s[i];
        x++;
    }
    cout << endl;
    return 0;
}
