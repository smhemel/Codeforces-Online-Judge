//
//  main.cpp
//  Helvetic Coding Contest 2018 - A1. Death Stars (easy)
//
//  Created by S M HEMEL on 14/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
string map[12], matrix[12],m[12],m1[12],m2[12];
int n;
bool check(){
    bool f=true,f1 = true;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++)
            if(map[i][j]!=matrix[i][j]){
                f = false; break;
            }
    for(int i=0,k=0; i<n; i++,k++) for(int j=0,k1=n-1; j<n; j++,k1--)
            if(map[i][j]!=matrix[k][k1]){
                f1 = false;break;
            }
    if(f || f1) return true;
    return false;
}
bool check1(){
    bool f=true,f1 = true;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++)
        if(map[i][j]!=m[i][j]){
            f = false; break;
        }
    for(int i=0,k=0; i<n; i++,k++) for(int j=0,k1=n-1; j<n; j++,k1--)
        if(map[i][j]!=m[k][k1]){
            f1 = false;break;
        }
    if(f || f1) return true;
    return false;
}
bool check2(){
    bool f=true,f1 = true;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++)
        if(map[i][j]!=m1[i][j]){
            f = false; break;
        }
    for(int i=0,k=0; i<n; i++,k++) for(int j=0,k1=n-1; j<n; j++,k1--)
        if(map[i][j]!=m1[k][k1]){
            f1 = false;break;
        }
    if(f || f1) return true;
    return false;
}
bool check3(){
    bool f=true,f1 = true;
    for(int i=0; i<n; i++) for(int j=0; j<n; j++)
        if(map[i][j]!=m2[i][j]){
            f = false; break;
        }
    for(int i=0,k=0; i<n; i++,k++) for(int j=0,k1=n-1; j<n; j++,k1--)
        if(map[i][j]!=m2[k][k1]){
            f1 = false;break;
        }
    if(f || f1) return true;
    return false;
}
int main() {
    cin >> n;
    for(int i=0; i<n; i++) cin >> map[i];
    for(int i=0; i<n; i++) cin >> matrix[i];
    if(check()) return 0 * puts("YES");
    for(int i=0,k=0; i<n; i++,k++)
        for(int j=n-1,k1=0; j>=0; j--,k1++){
            m[i][j] = matrix[k1][k];
        }
    if(check1()) return 0 * puts("YES");
    for(int i=0,k=0; i<n; i++,k++)
        for(int j=n-1,k1=0; j>=0; j--,k1++){
            m1[i][j] = m[k1][k];
        }
    if(check2()) return 0 * puts("YES");
    for(int i=0,k=0; i<n; i++,k++)
        for(int j=n-1,k1=0; j>=0; j--,k1++){
            m2[i][j] = m1[k1][k];
        }
    if(check3()) return 0 * puts("YES");
    puts("NO");
    return 0;
}
