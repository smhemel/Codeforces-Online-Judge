//
//  main.cpp
//  Codeforces Round #449 (Div. 2) - A
//
//  Created by S M HEMEL on 2/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <string>
#define ll long long int
using namespace std;
string s,s1;
int main(){
    int n,m,x,y;
    char c,c1;
    cin >> n >> m;
    cin >> s;
    for(int i=0; i<m; i++){
        cin >> x >> y >> c >> c1;
        static_cast<void>(x--),y--;
        for(int l=x; l<=y; l++)
            if(c==s[l]) s[l] = c1;
    }
    cout << s << endl;
    return 0;
}
