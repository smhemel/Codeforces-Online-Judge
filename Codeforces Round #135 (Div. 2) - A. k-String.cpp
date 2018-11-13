//
//  main.cpp
//  Codeforces Round #135 (Div. 2) - A. k-String
//
//  Created by S M HEMEL on 30/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;
string s,s1,s2;
int cnt[200];
int main()
{
    int n;
    cin >> n;
    cin >> s;
    for(auto c: s){
        if(!cnt[c])
            s1 += c;
        cnt[c]++;
    }
    sort(s1.begin(),s1.end());
    for(auto c: s1){
        if(cnt[c]%n!=0)
            return 0 * puts("-1");
        else{
            for(int i=0; i<cnt[c]/n; i++)
                s2 += c;
        }
    }
    for(int i=0; i<n; i++)
        cout << s2;
    cout << endl;
    return 0;
}
