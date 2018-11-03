//
//  main.cpp
//  Codeforces Beta Round #91 (Div. 2) B. Lucky Substring
//
//  Created by S M HEMEL on 3/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int xs[256];
int main()
{
    for(char c; cin>>c; ++xs[c]);
    cout << (xs['4'] >= xs['7'] ? xs['4'] ? 4 : -1 : 7) << endl;
    return 0;
}
