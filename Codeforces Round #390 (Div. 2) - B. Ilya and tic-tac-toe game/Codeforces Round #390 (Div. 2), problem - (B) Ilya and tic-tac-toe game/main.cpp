//
//  main.cpp
//  Codeforces Round #390 (Div. 2), problem - (B) Ilya and tic-tac-toe game
//
//  Created by S M HEMEL on 1/7/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

/*#include <iostream>
#include <cstdio>
using namespace std;
#define FOR(i,s,e) for(int i = (s); i < (e); i++)
char A[5][5];
int n, m, x, y, z, k, w;
bool check()
{
    w = 0;
    FOR(i, 0, 4) FOR(j, 0, 2)
    if (A[i][j] == 'x' && A[i][j + 1] == 'x' && A[i][j + 2] == 'x') w = 1;
    
    FOR(i, 0, 4) FOR(j, 0, 2)
    if (A[j][i] == 'x' && A[j + 1][i] == 'x' && A[j + 2][i] == 'x') w = 1;
    
    FOR(i, 0, 2) FOR(j, 0, 2)
    if (A[i][j] == 'x' && A[i+1][j+1] == 'x' && A[i+2][j+2] == 'x') w = 1;
    
    FOR(i, 0, 2) FOR(j, 2, 4)
    if (A[i][j] == 'x' && A[i+1][j-1] == 'x' && A[i+2][j-2] == 'x') w = 1;
    return w;
}

int main ()
{
    FOR(i, 0, 4) scanf("%s", A[i]);
    FOR(i, 0, 4) FOR(j, 0, 4)
    {
        if (A[i][j] != '.')
            continue;
        A[i][j] = 'x';
        if (check())
        {
            printf("YES\n");
            return 0;
        }
        A[i][j] = '.';
    }
    
    printf("NO\n");
    return 0;
}*/




#include <cstdio>
#include <iostream>
#include <cstdlib>

#define For(i,j,k) for(int i = j;i <= k;i++)
#define Add(x, y); if(S[x][y] == 'o') return; else cnt += S[x][y] == 'x';

char S[6][6];

void check(int a, int b, int c, int d, int e, int f)
{
    int cnt = 0;
    Add(a, b); Add(c, d); Add(e, f);
    if(cnt < 2) return;
    puts("YES"), exit(0);
}

int main()
{
    For(i,0,3) scanf("%s", S[i]);
    For(i,0,1) For(j,0,1) check(i, j, i+1, j+1, i+2, j+2);
    For(i,0,1) For(j,2,3) check(i, j, i+1, j-1, i+2, j-2);
    For(i,0,1) For(j,0,3) check(i, j, i+1, j, i+2, j);
    For(i,0,3) For(j,0,1) check(i, j, i, j+1, i, j+2);
    puts("NO");
    return 0;
}
