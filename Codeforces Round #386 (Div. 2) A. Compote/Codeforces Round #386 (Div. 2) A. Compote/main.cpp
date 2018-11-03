//
//  main.cpp
//  Codeforces Round #386 (Div. 2) A. Compote
//
//  Created by S M HEMEL on 12/18/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    while (cin >> a >> b >> c)
    {
       // bool flag = true;
        int sum = 0;
        while(1)
        {
            if(a==0)
                break;
            if(a*2<=b)
                if(a*4<=c) {
                sum = a+(a*2)+(a*4);
                break;
            }
            a--;
        }
        cout << sum << endl;
    }
    return 0;
}
