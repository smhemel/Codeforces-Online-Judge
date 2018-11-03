//
//  main.cpp
//  Codeforces Round #484 (Div. 2) - A
//
//  Created by S M HEMEL on 17/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <vector>
#include <cstdio>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
string s;
int main() {
    int n;
    cin >> n;
    cin >> s;
    if(n==1){
        if(s[0]=='1')
            return 0 * puts("Yes");
        else
            return 0 * puts("No");
    }
    if(s[n-1]=='0' && s[n-2]=='0')
        return 0 * puts("No");
    for(int i=0; i<n-1; i++){
        if(s[i]=='1' && s[i+1]=='1')
            return 0 * puts("No");
    }
    for(int i=0; i<n-2; i++){
        if(s[i]=='0' && s[i+1]=='0' && s[i+2]=='0')
            return 0 * puts("No");
    }
    puts("Yes");
    return 0;
}
