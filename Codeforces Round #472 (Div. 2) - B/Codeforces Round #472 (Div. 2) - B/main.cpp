//
//  main.cpp
//  Codeforces Round #472 (Div. 2) - B
//
//  Created by S M HEMEL on 24/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <cstdio>
#define ll long long int
using namespace std;
string s[100];
int n,m;
int main() {
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> s[i];
    for(int i=0; i<n; i++)
        for(int ii=0; ii<n; ii++)
            for(int j=0; j<m; j++)
                for(int jj=0; jj<m; jj++)
                {
                    int il = 0;
                    il += s[i][j] == '#';
                    il += s[i][jj] == '#';
                    il += s[ii][j] == '#';
                    il += s[ii][jj] == '#';
                    if(il==3) return 0 * puts("No");
                }
    puts("Yes");
    return 0;
}
