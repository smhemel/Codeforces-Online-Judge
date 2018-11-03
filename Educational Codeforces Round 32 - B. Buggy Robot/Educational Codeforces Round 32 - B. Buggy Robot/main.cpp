//
//  main.cpp
//  Educational Codeforces Round 32 - B. Buggy Robot
//
//  Created by S M HEMEL on 9/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int n;
int l=0,r=0;
string s;
int main(){
    cin >> n;
    cin >> s;
    for(int i=0; i<n; i++){
        if('L'==s[i]) l++;
        if('R'==s[i]) l--;
        if('D'==s[i]) r++;
        if('U'==s[i]) r--;
    }
    cout << n-(abs(l)+abs(r)) << endl;
    return 0;
}
