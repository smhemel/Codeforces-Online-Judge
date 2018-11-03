//
//  main.cpp
//  Codeforces Round #202 (Div. 2) - A. Cinema Line
//
//  Created by S M HEMEL on 3/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int c25,c50,c100;
int main()
{
    int n,x;
    bool flag = true;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> x;
        if(x==25)
            c25++;
        if(x==50)
        {
            c25--;
            if(c25<0)
                return 0 * puts("NO");
            c50++;
        }
        if(x==100)
        {
            if(c50>=1)
            {
                c50--;
                c25--;
                if(c25<0)
                    return 0 * puts("NO");
            }
            else
            {
                c25 -= 3;
                if(c25<0)
                    return 0 * puts("NO");
            }
            c100++;
        }
    }
    cout << "YES" << endl;
    return 0;
}
