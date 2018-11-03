//
//  main.cpp
//  Codeforces Round #494 (Div. 3) - B
//
//  Created by S M HEMEL on 8/7/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace std;
int main(){
    int a,b,x;
    cin >> a >> b >> x;
    if(x==1){
        for(int i=0; i<a; i++) cout << "0";
        for(int i=0; i<b; i++) cout << "1";
        return 0;
    }
    if(x==2){
        if(a==1){
            cout << "1"; b--;
            for(int i=0; i<a; i++) cout << "0";
            for(int i=0; i<b; i++) cout << "1";
            return 0;
        }
        else{
            cout << "0";
            a--;
            for(int i=0; i<b; i++) cout << "1";
            for(int i=0; i<a; i++) cout << "0";
            return 0;
        }
    }
    if(a>=b){
        cout << "0";
        a--;
        bool f = true;
        while(true){
            if(f){
                cout << "1";
                x--;b--;
                f = false;
            }
            else{
                f = true;
                cout << "0";
                x--;a--;
            }
            if(x==2) break;
        }
        if(!f){
            for(int i=0; i<a; i++) cout << "0";
            for(int i=0; i<b; i++) cout << "1";
        }
        else{
            for(int i=0; i<b; i++) cout << "1";
            for(int i=0; i<a; i++) cout << "0";
        }
        cout << endl;
    }
    else {
        cout << "1";
        b--;
        bool f = true;
        while(true){
            if(f){
                cout << "0";
                x--;a--;
                f = false;
            }
            else{
                f = true;
                cout << "1";
                x--;b--;
            }
            if(x==2) break;
        }
        if(!f){
            for(int i=0; i<b; i++) cout << "1";
            for(int i=0; i<a; i++) cout << "0";
        }
        else{
            for(int i=0; i<a; i++) cout << "0";
            for(int i=0; i<b; i++) cout << "1";
        }
        cout << endl;
    }
    return 0;
}
