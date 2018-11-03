//
//  main.cpp
//  Educational Codeforces Round 39 (Rated for Div. 2) - A
//
//  Created by S M HEMEL on 6/3/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main() {
    int n,x,sum = 0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        sum += abs(x);
    }
    cout << sum << endl;
    return 0;
}
