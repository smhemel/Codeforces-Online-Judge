//
//  main.cpp
//  Codeforces Round #345 (Div. 2) - A. Joysticks
//
//  Created by S M HEMEL on 3/26/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n1,n2,cnt=0;
    cin >> n1 >> n2;
    if(n1==1 && n2<=1) return 0 * puts("0");
    while(1)
    {
        while(n2>1)
            n2-=2,n1++,cnt++;
        if(n1<=1) break;
        while(n1>1)
            n1-=2,n2++,cnt++;
    }
    cout << cnt-1 << endl;
    return 0;
}
