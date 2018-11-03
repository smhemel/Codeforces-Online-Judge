//
//  main.cpp
//  Educational Codeforces Round 51 - A
//
//  Created by S M HEMEL on 20/9/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <string>
using namespace std;
string s,s1;
int main() {
    int n;
    cin >> n;
    while(n--){
        s = "";
        cin >> s;
        bool f = true;
        int lower = 0,upper = 0,digit = 0;
        for(int i=0; s[i]; i++){
            if(islower(s[i])) lower++;
            else if(isupper(s[i])) upper++;
            else if(isdigit((s[i]))) digit++;
        }
        if(lower && upper && digit){
            cout << s << endl;
            continue;
        }
        if(lower==0 && upper && digit){
            for(int i=0; s[i]; i++){
                if(upper>=digit && isupper(s[i]) && f){
                    f = false;
                    s[i] = 'a';
                }
                if(upper<digit && isdigit(s[i]) && f){
                    f = false;
                    s[i] = 'a';
                }
                cout << s[i];
            }
        }
        else if(lower && upper==0 && digit){
            for(int i=0; s[i]; i++){
                if(lower>=digit && islower(s[i]) && f){
                    f = false;
                    s[i] = 'A';
                }
                if(lower<digit && isdigit(s[i]) && f){
                    f = false;
                    s[i] = 'A';
                }
                cout << s[i];
            }
        }
        else if(lower && upper && digit==0){
            for(int i=0; s[i]; i++){
                if(upper>=lower && isupper(s[i]) && f){
                    f = false;
                    s[i] = '1';
                }
                if(upper<lower && islower(s[i]) && f){
                    f = false;
                    s[i] = '1';
                }
                cout << s[i];
            }
        }
        else if(!lower && !upper && digit){
            for(int i=1; s[i]; i++){
                if(isdigit(s[i]) && isdigit(s[i-1])){
                    s[i] = 'a';
                    s[i-1] = 'B';
                    cout << s[i-1];
                    f = false;
                }
                cout << s[i];
            }
        }
        else if(!lower && upper && !digit){
            for(int i=1; s[i]; i++){
                if((isupper(s[i]) && isupper(s[i-1]))){
                    s[i] = '1';
                    s[i-1] = 'a';
                    cout << s[i-1];
                    f = false;
                }
                cout << s[i];
            }
        }
        else if(lower && !upper && !digit){
            for(int i=1; s[i]; i++){
                if((islower(s[i]) && islower(s[i-1]))){
                    s[i] = '1';
                    s[i-1] = 'A';
                    cout << s[i-1];
                    f = false;
                }
                cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
