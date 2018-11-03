//
//  main.cpp
//  Codeforces Beta Round #25 (Div. 2) - A. IQ test
//
//  Created by S M HEMEL on 3/8/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,x,odd = 0,even = 0,p = 0,p1=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x&1){
            odd++;
            p1 = i+1;
        }
        else{
            p = i+1;
            even++;
        }
    }
    cout << ((odd>even) ? p : p1) << endl;
    return 0;
}
