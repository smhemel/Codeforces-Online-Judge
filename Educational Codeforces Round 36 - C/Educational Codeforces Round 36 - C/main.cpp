//
//  main.cpp
//  Educational Codeforces Round 36 - C
//
//  Created by S M HEMEL on 13/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstdlib>
#include <algorithm>
#include <cstring>
#define ll long long int
using namespace std;
string s,s1;
ll Max,ans;
void call(int n){
    string str;
    str = "";
    for(int i=0; i<n; i++){
        if(s[i]==s1[i])
            str += s[i];
        else{
            str += s[i+1];
            str += s[i];
            for(int l=i+2; l<n; l++)
                str += s[l];
            break;
        }
    }
    ans = stoll(str);
}
int main(){
    cin >> s;
    cin >> s1;
    sort(s.begin(),s.end(),greater<>());
    Max = stoll(s1);
    ans = stoll(s);
    if(Max<ans || s1.length()>s.length()){
        cout << ans << endl;
        return 0;
    }
    int len = (int)s.length();
    call(len);
    cout << ans << endl;
    return 0;
}
