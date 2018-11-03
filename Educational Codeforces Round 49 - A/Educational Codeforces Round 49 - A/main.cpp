//
//  main.cpp
//  Educational Codeforces Round 49 - A
//
//  Created by S M HEMEL on 18/8/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <map>
#include <algorithm>
#include <string>
#include <cmath>
#define ll long long int
#include <vector>
#include <set>
#include <cstring>
using namespace std;
ll ar[211111];
string s;
map<int,int>M;
vector<int>v;
int main() {
    int test,x;
    cin >> test;
    while (test--) {
        cin >> x;
        bool f = true;
        cin >> s;
        for(int i=0,j=x-1; i<x/2; i++,j--){
            v.clear(); M.clear();
            if(s[i]=='a') v.push_back(s[i]+1);
            else if(s[i]=='z') v.push_back(s[i]-1);
            else{
                v.push_back(s[i]+1);
                v.push_back(s[i]-1);
            }
            if(s[j]=='a') M[s[j]+1] = 1;
            else if(s[j]=='z') M[s[j]-1] = 1;
            else{
                M[s[j]+1] = 1;
                M[s[j]-1] = 1;
            }
            bool f1 = true;
            for(auto u: v)
                if(M[u]) {
                    f1 = false;
                    break;
                }
            if(f1) {
                puts("NO");
                f = false;
                break;
            }
        }
        if(f) puts("YES");
    }
    return 0;
}
