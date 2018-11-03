//
//  main.cpp
//  Codeforces Beta Round #95 (Div. 2) - A
//
//  Created by S M HEMEL on 2/15/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string s;
    bool flag=true;
    cin >> s;
    int len = (int) s.size();
    for(int i=1;i<len;i++){
        if(!(s[i] >= 'A' && s[i] <= 'Z')){
            flag = false;
            break;
        }
    }
    if(flag){
        s[0] = ((s[0]>='a' && s[0]<='z') ? s[0]-'a'+'A' : s[0]-'A'+'a');
        for(int i=1;i<len;i++)
            s[i] = tolower(s[i]);
    }
    cout<<s<<endl;
    return 0;
}
