//
//  main.cpp
//  Codeforces Round #411 (Div. 2) - B. 3-palindrome
//
//  Created by S M HEMEL on 5/4/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s = "abc";
int main()
{
    int n;
    cin >> n;
    int m = n;
    if(n==2){
        cout << "aa" << endl;
        return 0;
    }
    if(n==1){
        cout << "a" << endl;
        return 0;
    }
    while(n>0){
        n-=2;
        cout << "aa";
        if(n==1){
            cout << "b" << endl;
            return 0;
        }
        if(n<=0) return 0;
        n-=2;
        cout << "bb";
        if(n==1){
            cout << "a" << endl;
            return 0;
        }
    }
    return 0;
}
