//
//  main.cpp
//  April Fools Contest 2018 - C. Ravioli Sort
//
//  Created by S M HEMEL on 1/4/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int n, a[100];
int main() {
    cin >> n;
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    for(int i=0; i<n-1; i++)
        if(abs(a[i]-a[i+1])>=2) {
            cout << "NO\n";
            return 0;
        }
    cout << "YES\n";
    return 0;
}
