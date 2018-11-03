//
//  main.cpp
//  Codeforces Round #447 (Div. 2) - A
//
//  Created by S M HEMEL on 19/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>
#define ll long long int
using namespace std;
string s,s1;
int main(){
    cin >> s;
    int cnt = 0;
    int len = (int)s.length();
    for(int i=0; i<len; i++){
        s1 = "";
        if(s[i] == 'Q'){
            s1+= s[i];
            for(int j=i+1; j<len; j++){
                if(s[j] == 'A'){
                    s1+= s[j];
                    for(int l=j+1; l<len; l++){
                        if(s[l]=='Q')
                            cnt++;
                    }
                }
                
            }
        }
        
    }
    cout << cnt << endl;
    return 0;
}
