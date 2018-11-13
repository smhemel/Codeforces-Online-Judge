//
//  main.cpp
//  Codeforces Round #225 (Div. 2) - A. Coder
//
//  Created by S M HEMEL on 30/8/17.
//  Copyright © 2017 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstdio>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n==1){
        cout << n << endl << "C" << endl;
        return 0;
    }
    int m = n*n;
    if((m)%2)
        cout << ((m/2)+1) << endl;
    else
        cout << m/2 << endl;
    bool f = true;
    for(int i=1; i<=n; i++){
        if(i%2){
            cout << "C";
            f = false;
        }
        else{
            cout <<".";
            f = true;
        }
        for(int j=0; j<n-1; j++){
            if(f){
                cout << "C";
                f = false;
            }
            else{
                cout <<".";
                f = true;
            }
        }
        cout << endl;
    }
    return 0;
}
