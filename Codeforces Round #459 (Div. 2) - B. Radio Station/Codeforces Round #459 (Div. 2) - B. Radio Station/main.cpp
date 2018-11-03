//
//  main.cpp
//  Codeforces Round #459 (Div. 2) - B. Radio Station
//
//  Created by S M HEMEL on 29/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
using namespace std;
string s,s1,str[111111];
map <string,string> Map1;
int main(){
    int n,m;
    cin >> n >> m;
    cin.ignore();
    for(int i=0; i<n; i++){
        cin >> s >> str[i];
        Map1[str[i]] = s;
    }
    for(int i=0; i<m; i++){
        string st = "";
        cin >> s >> s1;
        for(int l=0; l<s1.size()-1; l++) st += s1[l];
        for(int j=0; j<n; j++){
            if(st==str[j]){
                cout << s << " " << st << "; #" << Map1[st] << endl;
                break;
            }
        }
    }
    return 0;
}
