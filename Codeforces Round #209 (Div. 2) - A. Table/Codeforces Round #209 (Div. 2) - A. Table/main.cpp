//
//  main.cpp
//  Codeforces Round #209 (Div. 2) - A. Table
//
//  Created by S M HEMEL on 3/31/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[50][50];
int main()
{
    int n,m,cnt=0;
    cin >> n >> m;
    for(int i=1; i<=n; i++)
        for(int l=1; l<=m; l++)
            cin >> a[i][l];
    for(int i=1; i<=n; i++)
        if(a[i][1]==1 || a[i][m]==1)
            cnt++;
    for(int i=2; i<=m-1; i++)
        if(a[1][i]==1)
            cnt++;
    for(int i=2; i<=m-1; i++)
        if(a[n][i]==1)
            cnt++;
    if(cnt>=1)
        puts("2");
    else
        puts("4");
    return 0;
}
