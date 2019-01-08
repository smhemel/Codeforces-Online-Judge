//
//  main.cpp
//  Educational Codeforces Round 19 - C. Minimal string
//
//  Created by S M HEMEL on 14/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstring>
#include <map>
using namespace std;
string s,t;
int cnt[200],ct[200];
bool check(char c){
    int d = c-97;
    for(int i=0; i<d; i++)
        if(cnt[i]>0)
            return false;
    return true;
}
void checkb(char c){
    int len = (int)t.length()-1;
    if(t[len]<c){
        cout << c ;
        s.erase(len-1,len);
    }
    t+= c;
}
int main()
{
    cin >> s;
    int len = (int)s.length();
    for(int i=0; i<len; i++)
        cnt[s[i]-97]++;
    for(auto u: s){
        cnt[u]--;
        if(u=='a'){
            cout << u;
            cnt[0]--;
            continue;
        }
        if(check(u)){
            checkb(u);
        }
    }
    cout << t << endl;
    return 0;
}
