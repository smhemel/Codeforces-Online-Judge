//
//  main.cpp
//  Codeforces Round #470 (Div. 2) - A
//
//  Created by S M HEMEL on 10/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <map>
#include <cmath>
#define ll long long int;
using namespace std;
int ar[1111111];
char s[511][511];
int n,m;
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
int main(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            scanf(" %c",&s[i][j]);
        }
    }
    int ok = 1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(s[i][j] !='S') continue;
            for(int k=0; k<4; k++){
                int x = i+dx[k];
                int y = j+dy[k];
                if(x<1 or x>n) continue;
                if(y<1 or y>m) continue;
                if(s[x][y]=='W') ok = 0;
                if(s[x][y]=='.') s[x][y] = 'D';
            }
        }
        
    }
    if(!ok) return 0 * puts("No");
    cout << "Yes" << endl;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cout << s[i][j];
        }
        cout << endl;
    }
    return 0;
}
