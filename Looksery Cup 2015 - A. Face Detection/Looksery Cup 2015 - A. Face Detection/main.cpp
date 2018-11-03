//
//  main.cpp
//  Looksery Cup 2015 - A. Face Detection
//
//  Created by S M HEMEL on 2/27/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
#include <string>
#include <algorithm>
using namespace std;
char s[100][100];
int main()
{
    int h, w;
    cin >> h >> w;
    for(int i=0; i<h; cin >> s[i],i++);
    int ans = 0;
    for(int i=0; i<h-1; i++)
        for(int j=0; j<w-1; j++) {
            string z = "";
            z += s[i][j];
            z += s[i][j+1];
            z += s[i+1][j];
            z += s[i+1][j+1];
            sort(z.begin(), z.end());
            if(z == "acef") ans++;
        }
    cout << ans << endl;
    return 0;
}
