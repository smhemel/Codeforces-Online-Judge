//
//  main.cpp
//  Educational Codeforces Round 30 - B. Balanced Substring
//
//  Created by S M HEMEL on 12/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int one,zero,cut_one,cut_zero;
int Max = 0;
string s,s1;
int main(){
    int n;
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++){
        if(s[i]=='0')
            zero++;
        else
            one++;
        Max = max(Max,min(zero,one));
    }
    cout << Max << endl;
    return 0;
}
