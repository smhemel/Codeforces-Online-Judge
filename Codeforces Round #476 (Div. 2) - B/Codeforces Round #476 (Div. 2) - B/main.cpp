//
//  main.cpp
//  Codeforces Round #476 (Div. 2) - B
//
//  Created by S M HEMEL on 26/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
using namespace std;
string str[111];
int n,m;
int main() {
    cin >> n >> m;
    for(int i=0; i<n; i++)
        cin >> str[i];
    int p=0,p1=0,Max = 0;
    for(int i=0; i<n; i++){
        int cnt = 0,x=0,y=0;
        for(int j=0; j<m; j++){
            if(str[i][j]=='.'){
                cnt++;
                x = i;
                y = j;
            }
        }
        if(cnt>Max){
            Max = cnt;
            p = x;
            p1 = y;
        }
    }
    for(int i=0; i<m; i++){
        int cnt = 0,x=0,y=0;
        for(int j=0; j<n; j++){
            if(str[j][i]=='.'){
                cnt++;
                x = i;
                y = j;
            }
        }
        if(cnt>Max){
            Max = cnt;
            p = x;
            p1 = y;
        }
    }
    cout << p+1 << " " << p1+1 << endl;
    return 0;
}
