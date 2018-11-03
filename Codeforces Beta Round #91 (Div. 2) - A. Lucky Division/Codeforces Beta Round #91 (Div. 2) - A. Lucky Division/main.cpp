//
//  main.cpp
//  Codeforces Beta Round #91 (Div. 2) - A. Lucky Division
//
//  Created by S M HEMEL on 3/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n, arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    while(cin >> n)
    {
        for(int i=0; i<14; i++)
        {
            if(n % arr[i] == 0)
            {
                cout << "YES" << endl;
                return 0;
            }
        }
        cout << "NO" << endl;
    }
    return 0;
}
