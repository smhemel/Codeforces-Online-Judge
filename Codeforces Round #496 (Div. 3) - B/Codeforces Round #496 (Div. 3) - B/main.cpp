//
//  main.cpp
//  Codeforces Round #496 (Div. 3) - B
//
//  Created by S M HEMEL on 10/7/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s,s1;
int main(){
    int cnt = 0;
    cin >> s >> s1;
    for(int i=(int)s.size()-1,j=(int)s1.size()-1; i>=0&&j>=0; i--,j--){
        if(s[i]==s1[j]){
            cnt++;
        }
        else break;
    }
    cout << (s.size()+s1.size())-cnt*2 << endl;
    return 0;
}
