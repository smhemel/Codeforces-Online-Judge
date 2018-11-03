//
//  main.cpp
//  Codeforces Round #479 (Div. 3) - A
//
//  Created by S M HEMEL on 6/5/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string s;
int main(){
    int n;
    cin >> s >> n;
    while(n--){
        string s1 ="";
        if(s[s.size()-1]!='0'){
            s[s.length()-1] = ((s[s.length()-1]-'0')-1)+'0';
        }
        else{
            for(int i=0; i<s.length()-1; i++)
                s1 += s[i];
            s.clear();
            s = s1;
        }
    }
    cout << s << endl;
    return 0;
}
