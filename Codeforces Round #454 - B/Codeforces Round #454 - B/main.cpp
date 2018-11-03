//
//  main.cpp
//  Codeforces Round #454 - B
//
//  Created by S M HEMEL on 14/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
using namespace std;
int x,y;
char c[15][15];
int main() {
    for(int i=1;i<=9;i++)
        for(int j=1;j<=9;j++) {
            cin >> c[i][j];
        }
    cin >> x >> y;
    int nx = (x-1)%3+1,ny=(y-1)%3+1;
    static_cast<void>(nx = (nx-1)*3+1),ny=(ny-1)*3+1;
    bool flag = false;
    for(int i=0; i<3; i++)
        for(int j=0; j<3; j++)
            if (c[nx+i][ny+j]=='.') {
                c[nx+i][ny+j]='!';
                flag=true;
            }
            
    if(!flag)
        for(int i=1; i<=9; i++)
            for(int j=1; j<=9; j++)
                if(c[i][j]=='.')
                    c[i][j]='!';
    
    for(int i=1;i<=9;i++) {
        for(int j=1;j<=9;j++) {
            cout << c[i][j];
            if(j%3==0) cout<<" ";
        }
        cout <<"\n";
        if(i%3==0)
            cout<<"\n";
    }
    return 0;
}
