//
//  main.cpp
//  Codeforces Round #422 (Div. 2) - B. Crossword solving
//
//  Created by S M HEMEL on 7/3/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>
using namespace std;
string s,s1;
vector <int> v,v1;
int main()
{
    int n,m,Min=999999;
    cin >> n >> m;
    cin >> s >> s1;
    int len = (int)s.length();
    int len1 = (int)s1.length();
    for(int i=0; i<=abs(len-len1); i++){
        int cnt = 0;
        for(int l=i,j=0; j<len; l++,j++){
            if(s[j]!=s1[l]){
                cnt++;
                v.push_back(j+1);
            }
        }
        if(Min>cnt){
            v1.clear();
            Min = cnt;
            for(auto u: v)
                v1.push_back(u);
            v.clear();
        }
        v.clear();
    }
    cout << Min << endl;
    for(auto u: v1)
        cout << u << " ";
    return 0;
}
