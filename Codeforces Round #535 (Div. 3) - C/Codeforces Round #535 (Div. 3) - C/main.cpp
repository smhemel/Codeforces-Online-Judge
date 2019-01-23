//
//  main.cpp
//  Codeforces Round #535 (Div. 3) - C
//
//  Created by S M HEMEL on 23/1/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string a_s;
int main()
{
    string s,s1;
    int n,ans = 0,Min = 99999999;
    cin >> n;
    cin >> s;
    int rem = n%3;
    for(int i=0; i<n-rem; i+=3){
        if(s[i]!='R'){
            ans++;}
        if(s[i+1]!='G') ans++;
        if(s[i+2]!='B') ans++;
    }
    if(rem==2){
        if(s[n-2]!='R') ans++;
        if(s[n-1]!='G') ans++;
    }
    else if(rem==1){
        if(s[n-1]!='R') ans++;
    }
    if(Min>ans){
        Min = ans;
        a_s = "RGB";
    }
    ans = 0;
    
    
    for(int i=0; i<n-rem; i+=3){
        if(s[i]!='G')
            ans++;
        if(s[i+1]!='R') ans++;
        if(s[i+2]!='B') ans++;
    }
    if(rem==2){
        if(s[n-2]!='G') ans++;
        if(s[n-1]!='R') ans++;
    }
    else if(rem==1){
        if(s[n-1]!='G') ans++;
    }
    if(Min>ans){
        Min = ans;
        a_s = "GRB";
    }
    ans = 0;
    
    for(int i=0; i<n-rem; i+=3){
        if(s[i]!='R')
            ans++;
        if(s[i+1]!='B') ans++;
        if(s[i+2]!='G') ans++;
    }
    if(rem==2){
        if(s[n-2]!='R') ans++;
        if(s[n-1]!='B') ans++;
    }
    else if(rem==1){
        if(s[n-1]!='R') ans++;
    }
    if(Min>ans){
        Min = ans;
        a_s = "RBG";
    }
    ans = 0;
    
    for(int i=0; i<n-rem; i+=3){
        if(s[i]!='G')
            ans++;
        if(s[i+1]!='B') ans++;
        if(s[i+2]!='R') ans++;
    }
    if(rem==2){
        if(s[n-2]!='G') ans++;
        if(s[n-1]!='B') ans++;
    }
    else if(rem==1){
        if(s[n-1]!='G') ans++;
    }
    if(Min>ans){
        Min = ans;
        a_s = "GBR";
    }
    ans = 0;
    
    for(int i=0; i<n-rem; i+=3){
        if(s[i]!='B')
            ans++;
        if(s[i+1]!='R') ans++;
        if(s[i+2]!='G') ans++;
    }
    if(rem==2){
        if(s[n-2]!='B') ans++;
        if(s[n-1]!='R') ans++;
    }
    else if(rem==1){
        if(s[n-1]!='B') ans++;
    }
    if(Min>ans){
        Min = ans;
        a_s = "BRG";
    }
    ans = 0;
    
    for(int i=0; i<n-rem; i+=3){
        if(s[i]!='B')
            ans++;
        if(s[i+1]!='G') ans++;
        if(s[i+2]!='R') ans++;
    }
    if(rem==2){
        if(s[n-2]!='B') ans++;
        if(s[n-1]!='G') ans++;
    }
    else if(rem==1){
        if(s[n-1]!='B') ans++;
    }
    if(Min>ans){
        Min = ans;
        a_s = "BGR";
    }
    cout << Min<<endl;
    for(int i=0; i<n-rem; i+=3) cout << a_s;
    if(rem== 2) cout << a_s[0] << a_s[1] << endl;
    else if(rem==1) cout << a_s[0] << endl;
    return 0;
}
