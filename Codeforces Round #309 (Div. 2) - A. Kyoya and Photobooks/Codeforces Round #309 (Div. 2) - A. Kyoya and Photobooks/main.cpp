//
//  main.cpp
//  Codeforces Round #309 (Div. 2) - A. Kyoya and Photobooks
//
//  Created by S M HEMEL on 2/24/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s;
int main()
{
    cin >> s;
    int len = (int) s.length();
    cout << (26*(len+1))-len << endl;
    return 0;
}
