//
//  main.cpp
//  Codeforces Round #374 (Div. 2) - A. One-dimensional Japanese Crossword
//
//  Created by S M HEMEL on 3/11/18.
//  Copyright © 2018 S M HEMEL. All rights reserved.
//

#include <iostream>
#include <cstring>
#define M 1000
using namespace std;
int main()
{
    int n;
    while ((cin >> n))
    {
        char a[M];
        int y =1;
        for (int i=0; i<n; i++)
            cin >> a[i];
        int count = 0,count1 = 0,x;
        for (int i=0; i<n; i++)
        {
            if ((a[i-1]=='B' && a[i]!='B') || (a[i]=='B' && (i==(n-1))))
                count1++;
        }
        cout << count1 <<endl;
        if (count1==0)
            break;
        for (int i=0; i<n; i++)
        {
            if (a[i]!='B')
                x = 0;
            if (a[i]=='B')
            {
                x = 1;
                count++;
            }
            if ((a[i-1]=='B' && a[i]!='B') || (a[i]=='B' && (i==(n-1))))
            {
                if(y==0)
                    cout <<" ";
                cout << count;
                y = 0;
                count = 0;
            }
        }
        cout <<endl;
    }
    return 0;
}
