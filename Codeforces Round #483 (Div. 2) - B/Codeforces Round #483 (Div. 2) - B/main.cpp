//
//  main.cpp
//  Codeforces Round #483 (Div. 2) - B
//
//  Created by S M HEMEL on 15/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <map>
#include <utility>
#define ll long long int
using namespace std;
string s[111];
char c[111][111];
int main() {
    int n,m,cnt = 0,sum = 0;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++)
            cin >> c[i][j];
    for(int i=1; i<=n; i++)
        for(int j=1; j<=m; j++){
            if(c[i][j]!='*'){
                cnt = 0;
                if(c[i-1][j]=='*') cnt++;
                if(c[i+1][j]=='*') cnt++;
                if(c[i-1][j-1]=='*') cnt++;
                if(c[i-1][j+1]=='*') cnt++;
                if(c[i][j+1]=='*') cnt++;
                if(c[i][j-1]=='*') cnt++;
                if(c[i+1][j+1]=='*') cnt++;
                if(c[i+1][j-1]=='*') cnt++;
                sum = c[i][j]-'0';
                if(c[i][j]=='.') sum = 0;
                if(sum!=cnt){
                    return 0 * puts("NO");
                }
            }
        }
    puts("YES");
    return 0;
}
