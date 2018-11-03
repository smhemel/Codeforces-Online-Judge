//
//  main.cpp
//  Codeforces Round #369 (Div. 2) - A. Bus to Udayland
//
//  Created by S M HEMEL on 5/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s[1111];
int main()
{
    int n;
    bool flag = true;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> s[i];
        if(s[i][0]=='O' && s[i][1]=='O' && flag){
            s[i][0] = s[i][1] = '+';
            flag = false;
        }
        if(s[i][3]=='O' && s[i][4]=='O' && flag){
            s[i][3] = s[i][4] = '+';
            flag = false;
        }
    }
    if(!flag){
        puts("YES");
        for(int i=0; i<n; i++)
            cout << s[i] << endl;
    }
    else
        puts("NO");
    return 0;
}
