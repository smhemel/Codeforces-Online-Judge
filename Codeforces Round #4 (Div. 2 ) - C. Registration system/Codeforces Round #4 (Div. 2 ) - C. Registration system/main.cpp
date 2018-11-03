//
//  main.cpp
//  Codeforces Round #4 (Div. 2 ) - C. Registration system
//
//  Created by S M HEMEL on 6/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <map>
#include <string>
using namespace std;
map<string,int>m;
string s[111111],str;
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> str;
        m[str]++;
        if(m[str]==1) cout << "OK" << endl;
        else cout << str << m[str]-1 << endl;
    }
    return 0;
}
