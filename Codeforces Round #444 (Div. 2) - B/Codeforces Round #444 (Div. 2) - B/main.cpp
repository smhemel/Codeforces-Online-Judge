//
//  main.cpp
//  Codeforces Round #444 (Div. 2) - B
//
//  Created by S M HEMEL on 3/11/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int a[10][20];
bool flag;
int check = 1;
void t_single(){
    flag = true;
    for(int i=0; i<2; i++)
        for(int l=0; l<6; l++)
            if(a[i][l]==check)
                flag = false;
    if(flag){
        if(check) cout << check-1 << endl;
        else cout << check << endl;
    }
}
void t_dou(){
    flag = true;
    bool f = false,f1 = false;
    for(int l=0; l<6; l++)
        if(a[0][l]==(int)(check/10))
            f = true;
    for(int l=0; l<6; l++)
        if(a[1][l]==(int)(check%10))
            f1 = true;
    if(f && f1) flag = false;
    static_cast<void>(f = false),f1 = false;
    for(int l=0; l<6; l++)
        if(a[1][l]==(int)check/10)
            f = true;
    for(int l=0; l<6; l++)
        if(a[0][l]==(int)(check%10))
            f1 = true;
    if(f && f1) flag = false;
    if(flag){
        if(check) cout << check-1 << endl;
        else cout << check << endl;
    }
}
void th_dou(){
    flag = true;
    bool f = false,f1 = false;
    for(int l=0; l<6; l++)
        if(a[0][l]==(int)(check/10))
            f = true;
    for(int l=0; l<6; l++)
        if(a[1][l]==(int)(check%10))
            f1 = true;
    if(f && f1) flag = false;
    for(int l=0; l<6; l++)
        if(a[2][l]==(int)check%10)
            f1 = true;
    if(f && f1) flag = false;
    static_cast<void>(f = false),f1 = false;
    for(int l=0; l<6; l++)
        if(a[1][l]==(int)check/10)
            f = true;
    for(int l=0; l<6; l++)
        if(a[0][l]==(int)(check%10))
            f1 = true;
    if(f && f1) flag = false;
    for(int l=0; l<6; l++)
        if(a[2][l]==(int)check%10)
            f1 = true;
    if(f && f1) flag = false;
    static_cast<void>(f = false),f1 = false;
    for(int l=0; l<6; l++)
        if(a[2][l]==(int)check/10)
            f = true;
    for(int l=0; l<6; l++)
        if(a[0][l]==(int)(check%10))
            f1 = true;
    if(f && f1) flag = false;
    for(int l=0; l<6; l++)
        if(a[1][l]==(int)(check%10))
            f1 = true;
    if(f && f1) flag = false;
    if(flag){
        if(check) cout << check-1 << endl;
        else cout << check << endl;
    }
}
int main(){
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
        for(int l=0; l<6; l++)
            cin >> a[i][l];
    if(n==1){
        while(true){
            flag = true;
            for(int i=0; i<6; i++)
                if(a[0][i]==check)
                    flag = false;
            if(flag){
                if(check) cout << check-1 << endl;
                else cout << check << endl;
            }
            check++;
            if(flag) return 0;
        }
    }
    if(n==2){
        while(true){
            if(check<10) t_single();
            else t_dou();
            check++;
            if(flag) return 0;
        }
    }
    if(n==3){
        while(true){
            if(check<10){
                flag = true;
                for(int i=0; i<3; i++)
                    for(int l=0; l<6; l++)
                        if(a[i][l]==check)
                            flag = false;
                if(flag){
                    if(check) cout << check-1 << endl;
                    else cout << check << endl;
                }
            }
            else th_dou();
            check++;
            if(flag) return 0;
        }
    }
    cout << "0" << endl;
    return 0;
}
