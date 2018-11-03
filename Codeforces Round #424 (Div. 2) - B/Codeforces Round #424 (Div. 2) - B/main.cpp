//
//  main.cpp
//  Codeforces Round #424 (Div. 2) - B
//
//  Created by S M HEMEL on 7/13/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
map <char,char> M;
string str,str1;
char c;
int main()
{
    cin >> str;
    for(int i=0; i<26; i++){
        cin >> c;
        M[str[i]] = c;
    }
    cin >> str1;
    int len = (int)str1.length();
    for(int i=0; i<len; i++){
        if(islower(str1[i])){
            printf("%c",tolower(M[str1[i]]));
            continue;
        }
        if(isupper(str1[i])){
            printf("%c",toupper(M[tolower(str1[i])]));
            continue;
        }
        printf("%c",str1[i]);
    }
    printf("\n");
    return 0;
}
