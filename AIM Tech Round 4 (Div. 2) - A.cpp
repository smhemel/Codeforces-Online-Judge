//
//  main.cpp
//  AIM Tech Round 4 (Div. 2) - A
//
//  Created by S M HEMEL on 24/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <cstdio>
#include <algorithm>
#include <map>
using namespace std;
string s;
int cnt[1000];
map <char,int> M;
int main()
{
    int n,t = 0;
    cin >> s;
    cin >> n;
    int size = (int )s.length();
    if(n>size)
        return 0 * puts("impossible");
    else {
        for(int i=0; i<size; i++){
            if(M[s[i]]!=2){
                M[s[i]] = 2;
                t++;
            }
        }
        int ans = n-t;
        if(ans<=0)
            puts("0");
        else
            cout << ans << endl;
    }
    return 0;
}
