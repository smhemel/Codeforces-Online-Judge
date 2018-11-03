//
//  main.cpp
//  Codeforces Round #465 (Div. 2) - B
//
//  Created by S M HEMEL on 19/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#include <utility>
using namespace std;
string s;
int main(){
    int n,cnt=0,x=0,y=0;
    cin >> n;
    cin >> s;
    map<pair<int,int>,bool> M;
    for(int i=0; i<n; i++){
        if(s[i]=='U')
            y++;
        if(s[i]=='R')
            x++;
        M[make_pair(x,y)] = true;
    }
    for(int i=1; i<=n; i++){
        if(M[make_pair(i+1,i)] && M[make_pair(i-1,i)]) cnt++;
        else if(M[make_pair(i,i+1)] && M[make_pair(i,i-1)]) cnt++;
    }
    cout << cnt << endl;
    return 0;
}
