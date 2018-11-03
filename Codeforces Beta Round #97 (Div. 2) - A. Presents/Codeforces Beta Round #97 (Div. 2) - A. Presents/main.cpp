//
//  main.cpp
//  Codeforces Beta Round #97 (Div. 2) - A. Presents
//
//  Created by S M HEMEL on 4/10/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    while(cin >> n)
    {
        int arr[n + 1], ans[n + 1];
        for(int i = 1; i <= n; ++i)
        {
            cin >> arr[i];
            ans[arr[i]] = i;
        }
        for(int i = 1; i <= n; ++i)
        {
            if(i > 1)
                cout << " ";
            cout << ans[i];
        }
        cout << "\n";
    }
    return 0;
}
