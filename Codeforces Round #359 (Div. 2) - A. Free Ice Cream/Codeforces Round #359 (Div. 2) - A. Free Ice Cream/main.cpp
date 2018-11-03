//
//  main.cpp
//  Codeforces Round #359 (Div. 2) - A. Free Ice Cream
//
//  Created by S M HEMEL on 3/25/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

int main()
{
    long long int n,own,cnt=0,give;
    cin >> n >> own;
    while (n--)
    {
        string s;
        cin >> s >> give;
        if(s=="+")
            own += give;
        if(s=="-")
        {
            if(own>=give)
                own -=give;
            else
                cnt++;
        }
    }
    cout << own << " " << cnt << endl;
    return 0;
}
