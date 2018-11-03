//
//  main.cpp
//  ducational Codeforces Round 16 - A. King Moves
//
//  Created by S M HEMEL on 4/19/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    char s[42];
    scanf("%s", s);
    int x, y;
    if (s[0]=='a' || s[0]=='h')
        x = 2;
    else
        x = 3;
    if (s[1]=='1' || s[1]=='8')
        y = 2;
    else
        y = 3;
    printf("%d\n", x*y-1);
    return 0;
}
