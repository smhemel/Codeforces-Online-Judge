//
//  main.cpp
//  Codeforces Round #478 (Div. 2) - A
//
//  Created by S M HEMEL on 1/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <cstring>
#define ll long long int
#include <algorithm>
#include <cmath>
#include <vector>
#include <map>
#include <utility>
using namespace std;
string s[11111];
int ar[111111];
map<string,int>M;
int main() {
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string x,x1;
        cin >> x;
        sort(x.begin(),x.end());
        x1 += x[0];
        for(int l=1; x[l]; l++)
            if(x[l-1]!=x[l])
                x1 += x[l];
        s[i] = x1;
    }
    int cnt = 0;
    for(int i=0; i<n; i++){
        if(!M[s[i]]) {
            cnt++;
            M[s[i]] = 1;
        }
    }
    cout << cnt << endl;
    return 0;
}
