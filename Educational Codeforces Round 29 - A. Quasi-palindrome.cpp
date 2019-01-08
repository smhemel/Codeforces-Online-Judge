//
//  main.cpp
//  Educational Codeforces Round 29 - A. Quasi-palindrome
//
//  Created by S M HEMEL on 21/9/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s,s1;
int main()
{
    cin >> s;
    bool f =  false;
    int len = (int)s.length();
    for(int i=len-1; i>=0; i--){
        if(s[i]!='0')
            f = true;
        if(f)
            s1 += s[i];
        }
    reverse(s1.begin(), s1.end());
    int len1 = (int)s1.length();
    for(int i=0,j=len1-1; i<j; i++,j--){
        if(s1[i]!=s1[j])
            return 0 * puts("NO");
    }
    puts("YES");
    return 0;
}
