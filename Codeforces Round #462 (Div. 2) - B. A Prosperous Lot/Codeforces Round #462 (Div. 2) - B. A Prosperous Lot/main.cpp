//
//  main.cpp
//  Codeforces Round #462 (Div. 2) - B. A Prosperous Lot
//
//  Created by S M HEMEL on 14/2/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
#define ll long long int
using namespace std;
string s;
int main() {
    int n;
    cin >> n;
    if(n>36) return 0 * puts("-1");
    if(n%2==0){
        for(int i=1; i<=n; i+=2){
            cout << "8";
        }
    }
    else{
        n--;
        for(int i=1; i<=n; i+=2)
            cout << "8";
        cout << "6";
    }
    cout << endl;
    return 0;
}
