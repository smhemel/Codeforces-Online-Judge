//
//  main.cpp
//  Codeforces Round #FF (Div. 2) - A. DZY Loves Hash
//
//  Created by S M HEMEL on 2/17/17.
//  Copyright © 2017 Eastern University. All rights reserved.
//

#include <iostream>
#include <cstring>
using namespace std;
bool a[10000000];
int main()
{
    int n,m,x;
    bool flag = true;
    cin >> n >> m;
    for(int i=0; i<m; i++)
    {
        cin >> x;
        int temp = x%n;
        if(a[temp]) {
            flag = false;
            cout << i+1 <<endl;
            return 0;
        }
        a[temp] = 1;
    }
    if(flag==true)
        puts("-1");
    return 0;
}
