//
//  main.cpp
//  Codeforces Round #370 (Div. 2) - A. Memory and Crow
//
//  Created by S M HEMEL on 4/12/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n+1];
    for(int i=0; i<n; i++)
        cin >> a[i];
    a[n++] = 0;
    for(int i=0; i<n-1; i++){
        cout << (a[i]+a[i+1]) << " ";
    }
    return 0;
}
