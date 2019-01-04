//
//  main.cpp
//  Hello 2019 - A
//
//  Created by S M HEMEL on 5/1/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//


#include <iostream>
#include <string>
using namespace std;
string s;
int main() {
    cin >> s;
    string s1;
    for(int i=0; i<5; i++){
        cin >> s1;
        if(s[1]==s1[1] || s[0]==s1[0]){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    
    
    
    return 0;
}
