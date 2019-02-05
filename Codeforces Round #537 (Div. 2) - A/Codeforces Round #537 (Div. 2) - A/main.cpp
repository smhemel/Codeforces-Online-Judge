//
//  main.cpp
//  Codeforces Round #537 (Div. 2) - A
//
//  Created by S M HEMEL on 5/2/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
bool isvowel(char c) {
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return true;
    return false;
}
bool isconsonent(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u') return false;
    return true;
}
int main(int argc, const char * argv[]) {
    string s,s1;
    cin >> s >> s1;
    if(s.size() != s1.size()) return 0 * puts("No");
    else {
        for(int i=0; s[i]; i++)
            if((isvowel(s[i]) && isconsonent(s1[i])) || (isvowel(s1[i]) && isconsonent(s[i])))
                return 0 * puts("No");
    }
    puts("Yes");
    return 0;
}
