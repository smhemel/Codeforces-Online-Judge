//
//  main.cpp
//  Codeforces Round #463 (Div. 1 + Div. 2, combined) - A
//
//  Created by S M HEMEL on 15/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    cin >> s;
    string temp = s;
    reverse(s.begin(),s.end());
    cout << temp+s << endl;
    return 0;
}
