//
//  main.cpp
//  ACM-ICPC-Swiss-Subregional 2017 - K. ACM
//
//  Created by S M HEMEL on 29/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
string s;
int main(){
    getline(cin,s);
    int len = (int)s.size()-2;
    for(int i=0; i<len; i++)
        if(s[i]=='A' && s[i+1]=='C' && s[i+2]=='M')
            return 0 * puts("Fun!");
    puts("boring...");
    return 0;
}
