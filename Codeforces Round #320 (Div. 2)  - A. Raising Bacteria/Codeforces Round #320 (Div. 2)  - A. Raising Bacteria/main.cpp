//
//  main.cpp
//  Codeforces Round #320 (Div. 2)  - A. Raising Bacteria
//
//  Created by S M HEMEL on 3/7/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,cnt = 0;
    cin >> n;
    while(n>0)
    {
        if(n%2) cnt++;
        n /=2;
    }
    cout << cnt << endl;
    return 0;
}
