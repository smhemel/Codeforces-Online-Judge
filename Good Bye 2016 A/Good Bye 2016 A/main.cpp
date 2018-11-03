//
//  main.cpp
//  Good Bye 2016 A
//
//  Created by S M HEMEL on 12/30/16.
//  Copyright © 2016 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n,m;
    while (cin >> n >> m)
    {
        int count = 0;
        for(int i=1; i<=n; i++)
        {
            
            m+=5*i;
            if(m>240) break;
            count++;
        }
        cout << count <<endl;
    }
    return 0;
}
