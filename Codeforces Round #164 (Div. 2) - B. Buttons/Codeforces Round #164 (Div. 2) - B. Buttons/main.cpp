//
//  main.cpp
//  Codeforces Round #164 (Div. 2) - B. Buttons
//
//  Created by S M HEMEL on 2/24/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    int cnt = 0;
    cin >> n;
    for(int i=1; i<=n; i++)
        cnt += i*(n-i);
    cnt += n;
    cout << cnt << endl;
    return 0;
}
