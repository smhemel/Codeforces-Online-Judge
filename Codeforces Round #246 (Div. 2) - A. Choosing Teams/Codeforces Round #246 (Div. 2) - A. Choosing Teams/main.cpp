//
//  main.cpp
//  Codeforces Round #246 (Div. 2) - A. Choosing Teams
//
//  Created by S M HEMEL on 3/28/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <algorithm>
using namespace std;
int a[2000],b[2000];
int main()
{
    int n,k,cnt=0;
    cin >> n >> k;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        if((5-x)>=k)
            cnt++;
    }
    cout << cnt/3 << endl;
    return 0;
}
