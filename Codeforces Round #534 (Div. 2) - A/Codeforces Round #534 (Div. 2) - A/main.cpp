//
//  main.cpp
//  Codeforces Round #534 (Div. 2) - A
//
//  Created by S M HEMEL on 22/1/19.
//  Copyright © 2019 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int p=10,p1=0;
    for(int i=9; i>=2; i--){
        if(n%i==0){
            cout << n/i << endl;
            for(int j=1; j<=n/i; j++)
                cout << i << " ";
            return 0;
        }
    }
    cout << n << endl;
    for(int j=1; j<=n; j++)
        cout << "1 ";
    return 0;
}

