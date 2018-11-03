//
//  main.cpp
//  Codeforces Round #361 (Div. 2) - A. Mike and Cellphone
//
//  Created by S M HEMEL on 3/26/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;
typedef long long LL;

int main(){
    int n;
    string b;
    cin >> n >> b;
    int up = 1;
    int left = 1;
    int right = 1;
    int down = 1;
    for(int i=0; i<n; i++)
    {
        if(b[i] == '0')
            left = right = down = 0;
        if(b[i] == '1' || b[i] == '2' || b[i] == '3')
            up = 0;
        if(b[i] == '1' || b[i] == '4' || b[i] == '7')
            left = 0;
        if(b[i] == '3' || b[i] == '6' || b[i] == '9')
            right = 0;
        if(b[i] == '7' || b[i] == '9')
            down = 0;
    }
    if(left || up || right || down) cout << "NO" << endl;
    else cout << "YES" << endl;
    return 0;
}
