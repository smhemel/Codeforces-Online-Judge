//
//  main.cpp
//  Codeforces Round #290 (Div. 2) B. Fox And Two Dots
//
//  Created by S M HEMEL on 6/25/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
int dr[4] = {0,1,0,-1};
int dc[4] = {1,0,-1,0};
int check[100][100];
char matrix[100][100];
bool is_circle;
int n,m;
void dfs(int x,int y,int d)
{
    if(is_circle)
        return ;
    check[x][y] = d;
    for(int i=0; i<4; i++)
    {
        int u = x+dr[i];
        int v = y+dc[i];
        if(u<0 || v<0 || u>=n || v>=m || (matrix[x][y] != matrix[u][v]))
            continue;
        if(check[u][v]>0) {
            if(abs(check[u][v]-check[x][y])>1) {
                is_circle = true;
                return ;
            }
            else continue;
        }
        dfs(u,v,d+1);
    }
}
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++)
        scanf("%s",matrix[i]);
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            if(!check[i][j]) {
                is_circle = false;
                dfs(i,j,1);
                if(is_circle)
                    return 0 * puts("Yes");
            }
    puts("No");
    return 0;
}
