//
//  main.cpp
//  Codeforces Round #264 (Div. 2) - (A) Caisa and Sugar
//
//  Created by S M HEMEL on 2/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include<iostream>
using namespace std;
int main()
{
    int n,s;
    int t=-1;
    cin >> n>> s;
    while(n--)
    {
        int x,y;
        cin >> x >> y;
        if(s*100>=x*100+y)
            t = max(t,(100-y)%100);
    }
    cout << t <<endl;
    return 0;
}
