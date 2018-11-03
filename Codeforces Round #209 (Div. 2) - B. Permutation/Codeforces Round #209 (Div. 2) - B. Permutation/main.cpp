//
//  main.cpp
//  Codeforces Round #209 (Div. 2) - B. Permutation
//
//  Created by S M HEMEL on 3/31/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin >> n >> m;
    m *= 2;
    n *= 2;
    cout << m;
    for(int i=1; i<n; i++)
        cout << " 0";
    cout << endl;
    return 0;
}
