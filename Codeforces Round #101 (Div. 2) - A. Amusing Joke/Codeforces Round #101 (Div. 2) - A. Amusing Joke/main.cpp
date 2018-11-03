//
//  main.cpp
//  Codeforces Round #101 (Div. 2) - A. Amusing Joke
//
//  Created by S M HEMEL on 4/18/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
string s,s1,s2;
int main()
{
    cin >> s;
    cin >> s1;
    s +=s1;
    cin >> s2;
    sort(s.begin(),s.end());
    sort(s2.begin(),s2.end());
    if(s==s2)
        puts("YES");
    else
        puts("NO");
    return 0;
}
