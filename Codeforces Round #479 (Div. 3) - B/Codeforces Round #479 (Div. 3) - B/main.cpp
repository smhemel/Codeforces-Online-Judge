//
//  main.cpp
//  Codeforces Round #479 (Div. 3) - B
//
//  Created by S M HEMEL on 6/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#include <set>
using namespace std;
string s,s1;
map<string,int> M;
set<string> Set;
int Max = 0;
int main(){
    int n;
    cin >> n;
    cin >> s;
    for(int i=0; i<n-1; i++){
        s1 = "";
        s1 += s[i];
        s1 += s[i+1];
        Set.insert(s1);
        M[s1]++;
    }
    for(auto str: Set){
        if(M[str]>Max){
            Max = M[str];
            s1 = "";
            s1 = str;
        }
    }
    cout << s1 << endl;
    return 0;
}
