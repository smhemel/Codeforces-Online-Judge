//
//  main.cpp
//  Good Bye 2018 - A
//
//  Created by S M HEMEL on 30/12/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#define ll long long int
using namespace std;
int main() {
    int n,m,x,m1 = 0,n1 = 0,x1 = 0;
    cin >> n >> m >> x;
    cout << min(min(n+1,x-1),m)*3 << endl;
    return 0;
}
