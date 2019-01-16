//
//  main.cpp
//  Manthan, Codefest 17 - A
//
//  Created by S M HEMEL on 24/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <map>
using namespace std;
map<string,int> v;
int main()
{
    string s;
    int n;
    cin >> n;
    while (n--) {
        cin >> s;
        if(v[s])
            puts("YES");
        else
            puts("NO");
        v[s] = 1;
    }
    return 0;
}
