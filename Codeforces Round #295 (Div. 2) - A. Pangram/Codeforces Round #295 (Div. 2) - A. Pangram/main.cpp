//
//  main.cpp
//  Codeforces Round #295 (Div. 2) - A. Pangram
//
//  Created by S M HEMEL on 4/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <numeric>
#include <cstdlib>
#include <cstdio>
using namespace std;
int cnt[26];
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    for(int i=0; i<n; i++)
        cnt[toupper(s[i])-'A'] = 1;
    if(accumulate(cnt,cnt+26,0)==26)
        puts("YES");
    else
        puts("NO");
    return 0;
}
