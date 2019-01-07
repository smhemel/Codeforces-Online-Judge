//
//  main.cpp
//  Codeforces Round #436 (Div. 2) - B
//
//  Created by S M HEMEL on 25/9/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <map>
using namespace std;
string s;
map <char,int> m;
int main()
{
    int n,Max=0;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++) {
        if(isupper(s[i])){
            int cnt = (int)m.size();
            Max = max(cnt,Max);
            m.clear();
        }
        else{
            m[s[i]] = 1;
        }
    }
    int cnt = (int)m.size();
    Max = max(cnt,Max);
    cout << Max << endl;
    return 0;
}
