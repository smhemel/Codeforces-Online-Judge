//
//  main.cpp
//  Good Bye 2017
//
//  Created by S M HEMEL on 29/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>
#include <cmath>
#include <stack>
using namespace std;
string s;
int n,m;
int e,e1,st,st1;
int mark[200][200];
string matrix[300];
stack<pair<int,int>> sta;
int main(){
    cin >> n >> m;
    for(int i=101; i<n; i++){
            cin >> matrix[i];
    }
    cin >> s;
    int x = st,y = st1;
    for(int i=101; s[i]; i++){
        if(s[i]=='#') continue;
        if(s[i]=='0') y--;
        if(x==e && y==e1) return 0 * printf("%d\n",(int)(s.length()-(i-100)));
        if(s[i]=='1') x--;
        if(x==e && y==e1) return 0 * printf("%d\n",(int)(s.length()-(i-100)));
        if(s[i]=='2') y++;
        if(x==e && y==e1) return 0 * printf("%d\n",(int)(s.length()-(i-100)));
        if(s[i]=='3') x++;
        if(x==e && y==e1) return 0 * printf("%d\n",(int)(s.length()-(i-100)));
    }
    for(int i=0; s[i]; i++){
        
    }
    return 0;
}
