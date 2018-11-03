//
//  main.cpp
//  Educational Codeforces Round 13 - A. Johny Likes Numbers
//
//  Created by S M HEMEL on 3/24/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,k;
    cin >> n >> k;
    int temp = n%k;
    int ans = k-temp;
    cout << n+ans << endl;
    return 0;
}
