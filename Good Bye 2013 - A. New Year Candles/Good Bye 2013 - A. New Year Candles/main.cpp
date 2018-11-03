//
//  main.cpp
//  Good Bye 2013 - A. New Year Candles
//
//  Created by S M HEMEL on 4/14/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,m,cnt = 0,temp = 0;
    cin >> n >> m;
    cnt += n;
    while(n>=m)
    {
        if(!(n%m)){
            n = n/m;
            cnt += n;
        }
        else
        {
            temp+= (n%m);
            n /= m;
            cnt += n;
        }
        n += temp;
        temp = 0;
    }
    cout << cnt << endl;
    return 0;
}
