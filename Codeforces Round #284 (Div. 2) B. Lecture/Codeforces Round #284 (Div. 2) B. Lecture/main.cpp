//
//  main.cpp
//  Codeforces Round #284 (Div. 2) B. Lecture
//
//  Created by S M HEMEL on 6/26/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<iostream>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<map>
using namespace std;
string s,s1;
map<string,string> M;
 int main()
{
    int n,m;
    cin >> n >> m;
    while(m--)
    {
        cin >> s >> s1;
        if(s.size()<=s1.size()) {
            M[s]=s;
            M[s1]=s;
        }
        else {
            M[s]=s1;
            M[s1]=s1;
        }
    }
    while(n--){
        cin >> s;
        cout << M[s] << " ";
    }
    return 0;
}
