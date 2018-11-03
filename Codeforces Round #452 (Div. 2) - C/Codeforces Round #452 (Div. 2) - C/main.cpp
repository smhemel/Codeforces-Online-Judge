//
//  main.cpp
//  Codeforces Round #452 (Div. 2) - C
//
//  Created by S M HEMEL on 17/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
int main(){
    ll n;
    cin >> n;
    ll total  = n*(n+1)/2;
    if(total&1){
        if(n&1){
            cout << (int)(n/2)+1 << endl;
            cout << (int)(n/2)+1;
            for(ll i=1,j=n; i<j; i+=2,j-=2){
                cout <<" " << i << " " << j;
            }
            cout << " "<<(int)(n/2)+1 << endl;
        }
        else {
            puts("1");
            cout << (int)(n/2);
            if(n>2){
                for(ll i=1,j=n; i<=j; i+=2,j-=2){
                    cout <<" " << i << " " << j;
                }
            }
        }
        cout << endl;
        return 0;
    }
    else{
        puts("0");
        if(n&1){
            cout << (int)(n/2)+1;
            for(ll i=1; i<=n; i+=2){
                cout <<" "<< i;
            }
            cout << endl;
        }
        else {
            cout << (int)(n/2) <<" ";
            for(ll i=1,j=n; i<j; i+=2,j-=2){
                cout << " "<<i << " " << j;
            }
            
        }
        cout << endl;
    }
    return 0;
}
