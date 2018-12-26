//
//  main.cpp
//  Codeforces Round #425 (Div. 2) - B. Petya and Exam
//
//  Created by S M HEMEL on 24/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cmath>
#include <string>
#include <cstdio>
#include <algorithm>
#include <map>
#define ll long long int
using namespace std;
string s,s1,s2,str;
map <char,int> m;
int main()
{
    cin >> s;
    for(int i=(int)s.size()-1; i>=0; i--){
        m[s[i]] = 2;
    }
    s1 = "";
    cin >> s2;
    int len = 0;
    int t = (int)s2.length();
    for(int i=0; i<t; i++){
        if(s2[i]!='*')
            s1 += s2[i];
    }
    len = (int)s1.length();
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        bool f = true;
        cin >> str;
        int x = (int)str.length();
        //printf("%d %d %d\n",t,len,x);
        if(x!=t){
            if(x!=len){
                puts("NO");
                continue;
            }
        }
        int p = 0;
        for(int i=0; i<t; i++){
            if(i>=x)
                break;
            if(s2[i]=='*'){
                p = i;
                continue;
            }
            if(s2[i]!='?'){
                if(s2[i]!=str[i]){
                    f = false;
                    break;
                }
            }
        }
        if(f==false){
            puts("NO");
            continue;
        }
        for(int i=0; i<x; i++){
            if(i==p){
                if(str[i]!=0)
                    f = false;
                continue;
            }
            if(m[str[i]]!=2){
                f = false;
                break;
            }
        }
        if(f==false){
            puts("NO");
            continue;
        }
        puts("YES");
    }
    return 0;
}
