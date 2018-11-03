//
//  main.cpp
//  Codeforces Round #471 (Div. 2) - B
//
//  Created by S M HEMEL on 23/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#define ll long long int
#include <string>
#include <cstring>
#include <cstdio>
#include <map>
using namespace std;
int ar[111111];
string s;
map<int,int> M;
int main() {
    cin >> s;
    for(int i=0; s[i]; i++){
        ar[s[i]-97]++;
    }
    int y = 0;
    for(int i=0; i<26; i++){
        if(ar[i]>0)
            y++;
    }
    if(y<3 || y>4 || s.size()<=3)
    {
        if(y==2)
        {
            bool f = false;
            for(int i=0; i<26; i++){
                if(ar[i]>0 && ar[i]==1)
                    f = true;
            }
            if(f) return 0 * puts("No");
            else return 0 * puts("Yes");
        }
        else return 0 * puts("No");
    }
    else return 0 * puts("Yes");
    return 0;
}
