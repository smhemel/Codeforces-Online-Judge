//
//  main.cpp
//  Educational Codeforces Round 25 - B. Five-In-a-Row
//
//  Created by S M HEMEL on 7/16/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int fx[] = {-1,0,1,0,1,1,-1,-1};
int fy[] = {0,-1,0,1,1,-1,1,-1};
char matrix[11][11];
int visit[11][11];

bool good(int x, int y) {
    for(int k=0; k<8; k++) {
        bool gd = visit[x][y];
        int u = x,v = y;
        for(int i=0; i<4; i++) {
            u = u + fx[k];
            v = v + fy[k];
            if(u < 0 || v < 0 || u >= 10 || v >= 10)
                gd = false;
            gd &= visit[u][v];
        }
        if(gd)
             return true;
    }
    return false;
}

bool ans_me(int x, int y) {
    if(matrix[x][y] != '.')
        return false;
    visit[x][y] = true;
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
            if(good(i, j) && visit[i][j])
                return true;
    visit[x][y] = false;
    return false;
}

int main()
{
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
            cin >> matrix[i][j];
    bool gd = 0;
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
            visit[i][j] = matrix[i][j] == 'X';
    for(int i=0; i<10; i++)
        for(int j=0; j<10; j++)
            gd |= ans_me(i, j);
    puts(gd ? "YES" : "NO");
    return 0;
}

