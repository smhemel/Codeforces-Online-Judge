//
//  main.cpp
//  Codeforces Round #127 (Div. 2) - A. LLPS
//
//  Created by S M HEMEL on 3/31/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
#define  all(x)  x.begin(), x.end()
int main()
{
    string s;
    cin >> s;
    char c = *max_element(all(s));
    int cnt = count(all(s), c);
    while(cnt--)
        cout << c;
    return 0;
}
