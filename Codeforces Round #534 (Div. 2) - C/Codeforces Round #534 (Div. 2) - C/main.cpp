//
//  main.cpp
//  Codeforces Round #534 (Div. 2) - C
//
//  Created by S M HEMEL on 22/1/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>
#include <stack>
using namespace std;
string s;
stack<int> zero;
stack<int> one;
int main() {
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0'){
            if(zero.empty()){
                printf("1 1 \n");
                zero.push(0);
            }
            else{
                printf("3 1\n");
                zero.pop();
            }
        }
        else{
            if(one.empty()){
                printf("4 3\n");
                one.push(0);
            }
            else{
                printf("4 1\n");
                one.pop();
            }
        }
    }
    return 0;
}
