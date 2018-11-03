//
//  main.cpp
//  Codeforces Round #458 (Div. 1 + Div. 2) - B
//
//  Created by S M HEMEL on 20/1/18.
//  Copyright © 2018 Eastern University. All rights reserved.
//

#include <iostream>
#include <map>
using namespace std;
int ar[111111];
int main()
{
    int n,x;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x;
        if(ar[x]) ar[x] = 0;
        else ar[x] = 1;
    }
    for(int i=100000; i>=1; i--)
        if(ar[i]) return 0 * puts("Conan");
    puts("Agasa");
    return 0;
}
