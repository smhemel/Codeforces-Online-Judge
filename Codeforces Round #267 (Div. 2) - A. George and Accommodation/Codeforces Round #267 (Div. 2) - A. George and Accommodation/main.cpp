//
//  main.cpp
//  Codeforces Round #267 (Div. 2) - A. George and Accommodation
//
//  Created by S M HEMEL on 2/23/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,count = 0;
    cin >> n;
    while (n--)
    {
        int x,y;
        cin >> x >> y;
        if((y-x)>=2)
            count++;
    }
    cout << count << endl;
    return 0;
}
